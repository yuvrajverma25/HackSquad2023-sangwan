var TODO = [];
var priority = "low";
var temp2;

function _(idClass){		//Function for my convinence
	return document.querySelector(idClass);
}

function addTODO(heaD,desc,prior){		//Function to add elements in the Array
	var count = (TODO.length == 0) ? 1 : (TODO[0].id+1);
	TODO.unshift({
			id : count,
			head : heaD,
			description : desc,
			isImportant : false,
			isCompleted : false,
			priority: prior
		}
	);
	renderTODO();
}

function delTODO(idd){		//Function to delete the selected TODO
	for(var i=0;i<TODO.length;i++){
		if(TODO[i].id == idd){
			TODO.splice(i,1)
			return;
		}
	}
}	

function renderTODO(){		//Function to render the TODO array
	var htmlString="";
	for(var i=0;i<TODO.length;i++){
		htmlString+="<div class='innerBox' id='TODO"+TODO[i].id+"'><div class='textView "+TODO[i].priority+"'><div class='TODOid "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].head+"</div><div class='TODOdesc "+(TODO[i].isCompleted ? 'striked' : '')+"'>"+TODO[i].description+"</div></div><div class='iconDiv'><img src='"+(TODO[i].isImportant ? 'love2.png' : 'loveW.png')+"' class='icons' /><img src='"+(TODO[i].isCompleted ? 'tick1.png' : 'tickW.png')+"' class='icons'/><img src='editW.png' class='icons'/><img src='trashW.png' class='icons'/></div></div>";
	}
	_("#centerTODOlist").innerHTML = htmlString;
	addFunction();
}

function returnIndex(idd){		//Function to return the index of the mathching element
	for(var i=0;i<TODO.length;i++){
		if(TODO[i].id == idd){
			return i;
		}
	}
}

function updateTODO(idd){		//Function that render the value of the edit box in the input box
	var priorityArr = ["low","medium","high"];	
	_("#inputHead").value = _("#TODO"+idd).firstElementChild.children[0].innerText;
	_("#inputBox").value = _("#TODO"+idd).firstElementChild.children[1].innerText;
	var prior = TODO[returnIndex(idd)].priority;
	for(var i=0;i<priorityArr.length;i++){
		if(priorityArr[i]!=prior)
			_("#"+priorityArr[i]).checked = false;
	} 
	_("#"+prior).checked = true;
	_("#send").innerText = "Update";
	_("#textAdd").innerText = "Update Task"
	temp2=idd;
}

function updater(num,prior){			//Function that update the todo that is edited
	var index = returnIndex(num);
	TODO[index] = {
		id : num,
		head : _("#inputHead").value,
		description : _("#inputBox").value,
		isImportant : false,
		isCompleted : false,
		priority: prior
	}
	_("#send").innerText = "Add";
	_("#textAdd").innerText = "Add Tasks"
	renderTODO();
	emptyInput();
}


