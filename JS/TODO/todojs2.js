var today = new Date();
var temp = false;
priority = "low";





function monthCal(month){		//Function that change the number value of current month to words
	if(month == 0){
		return "JAN";
	}
	if(month == 1){
		return "FEB";
	}
	if(month == 2){
		return "MAR";
	}
	if(month == 3){
		return "APR";
	}
	if(month == 4){
		return "MAY";
	}
	if(month == 5){
		return "JUN";
	}
	if(month == 6){
		return "JUL";
	}
	if(month == 7){
		return "AUG";
	}
	if(month == 8){
		return "SEP";
	}
	if(month == 9){
		return "OCT";
	}
	if(month == 10){
		return "NOV";
	}
	if(month == 11){
		return "DEC";
	}
}

function prioritySelector(idd){		//Function that check for the priority
	if(idd.target.tagName == "INPUT" && (idd.target.id!="low" || temp)){
		_("#"+priority).checked = false;
		priority = idd.target.id;
		temp = true;
	}
}

function add(ele){		//Function to add the TODO
	if(errorChecker()){
		if(ele.target.innerText == "Add"){
			var head = _("#inputHead").value;
			var desc = _("#inputBox").value;
			addTODO(head,desc,priority);
			addFunction();
			emptyInput();
			taskCalculator();
			return;
		}
		updater(temp2,priority);
	}
}


	
function forChangingIcons(ele){		//Function that change the icons ang strike the TODO that already done
	var element = ele.target.src;
	if(element!=undefined ){
		var ide = getGrantparentID(ele);
		if(element.endsWith("loveW.png")){
			ele.target.src="love2.png";
			isImportantToggle(ide,true);
			return;
		}
		else if(element.endsWith("love2.png")){
			isImportantToggle(ide,false);
			ele.target.src="loveW.png";
			return;
		}
		else if(element.endsWith("tickW.png")){
			isCompleteToggle(ide,true);
			(ele.target.parentNode.previousElementSibling.children[1].classList.add("striked"));
			(ele.target.parentNode.previousElementSibling.children[0].classList.add("striked"));
			ele.target.src="tick1.png";
			taskCalculator();	
			return;
		}
		else if(element.endsWith("trashW.png")){
			delTODO(ide);
			renderTODO();
			addFunction();
			emptyInput();
			taskCalculator();	
			return;
		}
		else if (element.endsWith("editW.png")) {
			updateTODO(ide);
			return;
		}
		else{
			isCompleteToggle(ide,false)
			ele.target.src="tickW.png";
			ele.target.parentNode.previousElementSibling.children[0].classList.remove("striked");
			ele.target.parentNode.previousElementSibling.children[1].classList.remove("striked");
			taskCalculator();	
			return;
		}

	}
}

function isCompleteToggle(ide,val){			//Function that make the isCompleted as true or false as per the input
	TODO[returnIndex(ide)].isCompleted = val;
}

function isImportantToggle(ide,val){			//Function that make the isImportant as true or false as per the input
	TODO[returnIndex(ide)].isImportant = val;
}

function getGrantparentID(ele){		//Get the id by accessing the grant parent
	var element = parseInt(ele.target.parentNode.parentNode.id.slice(-1));
	return element;
}

function addFunction(){		//Function to add the event listener to the parent
	_("#centerTODOlist").addEventListener("click",forChangingIcons)
}

function emptyInput(){		//Function to empty the INput boxes
	_("#inputHead").value = "";
	_("#inputBox").value = "";

}

function taskCalculator(){		//Function to calculate the no of tasks and the tasks that already done
	var done = retrieveNoOfTaskDone();
	_("#done").innerText = "Done : "+done;
	_("#totWorks").innerText = "Total Works : "+TODO.length;
	var lengthOfBar = (done/TODO.length)*100;
	if(lengthOfBar!=0){
		_("#currentProgress").style.width = lengthOfBar+"%";
		return;
	}
	_("#currentProgress").style.width = "1%";
}

function retrieveNoOfTaskDone(){		//Function that the Task that was already done
	var count =0;
	for(var i=0;i<TODO.length;i++){
		if(TODO[i].isCompleted){
			count++;
		}
	}
	return count;
}

function errorChecker(){		//Function that checks the input boxes are empty
	var str = "";	
	if(_("#inputBox").value == "" && _("#inputHead").value == ""){
		str = "TODO Description and heading must not be empty";
	}
	else if(_("#inputBox").value == ""){
		str = "TODO Description must not be empty";
	}
	else if(_("#inputHead").value == ""){
		str = "TODO heading must not be empty";
	}
	if(str != ""){
		_("	#error").innerText = str;
		_("	#error").style.display = "block";
		return false;
	}
	return true;

}	


function renderParticular(ele){			//Function for filtering
	var htmlString = "";
	if(ele.target.tagName =="SPAN"){
		if(ele.target.parentNode.id.slice(6).trim()=="important"){
			for(var i=0;i<TODO.length;i++){
					if(TODO[i].isImportant){
						htmlString+="<div class='innerBox' id='TODO"+TODO[i].id+"'><div class='textView "+TODO[i].priority+"'><div class='TODOid "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].head+"</div><div class='TODOdesc "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].description+"</div></div><div class='iconDiv'><img src='"+(TODO[i].isImportant ? 'love2.png' : 'loveW.png')+"' class='icons' /><img src='"+(TODO[i].isCompleted ? 'tick1.png' : 'tickW.png')+"' class='icons'/><img src='editW.png' class='icons'/><img src='trashW.png' class='icons'/></div></div>";
					}
			}
			_("#centerTODOlist").innerHTML = htmlString;
			return;
		}
		if(ele.target.parentNode.id.slice(6).trim()=="all"){
			renderTODO();
			return;
		}
		if(ele.target.parentNode.id.slice(6)!="completed"){
			for(var i=0;i<TODO.length;i++){
				if(TODO[i].priority == ele.target.parentNode.id.slice(6)){
					htmlString+="<div class='innerBox' id='TODO"+TODO[i].id+"'><div class='textView "+TODO[i].priority+"'><div class='TODOid "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].head+"</div><div class='TODOdesc "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].description+"</div></div><div class='iconDiv'><img src='"+(TODO[i].isImportant ? 'love2.png' : 'loveW.png')+"' class='icons' /><img src='"+(TODO[i].isCompleted ? 'tick1.png' : 'tickW.png')+"' class='icons'/><img src='editW.png' class='icons'/><img src='trashW.png' class='icons'/></div></div>";
				}
			}
			_("#centerTODOlist").innerHTML = htmlString;
			return;
		}
		if(ele.target.parentNode.id.slice(6)=="completed"){
			for(var i=0;i<TODO.length;i++){
					if(TODO[i].isCompleted){
						htmlString+="<div class='innerBox' id='TODO"+TODO[i].id+"'><div class='textView "+TODO[i].priority+"'><div class='TODOid "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].head+"</div><div class='TODOdesc "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].description+"</div></div><div class='iconDiv'><img src='"+(TODO[i].isImportant ? 'love2.png' : 'loveW.png')+"' class='icons' /><img src='"+(TODO[i].isCompleted ? 'tick1.png' : 'tickW.png')+"' class='icons'/><img src='editW.png' class='icons'/><img src='trashW.png' class='icons'/></div></div>";
					}
			}
			_("#centerTODOlist").innerHTML = htmlString;
			return;
		}

	}
}






_("#low").checked = true;		//Initially,to check the low priority box.
_("#date").innerText = today.getDate();		//Fill the current date in the respective div
_("#month").innerText = monthCal(today.getMonth()); 	//Fill the current month in the respective div 

_("#addBar").addEventListener("click",prioritySelector);
_("#send").addEventListener("click",add);

_("#inputBox").addEventListener("input",function(){		//Function that disappears the error when start typing in the description box
	_("#error").style.display = "none";
});

_("#inputHead").addEventListener("input",function(){	//Function that disappears the error when start typing in the heading box
	_("#error").style.display = "none";
});

taskCalculator();		//For make the total works = 0, initially.

_("#filters").addEventListener("click",renderParticular)