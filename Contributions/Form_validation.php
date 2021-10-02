<?php
error_reporting(0);
if(isset($_POST['sb']))
{
	$fn = $_POST['fn'];
	$email = $_POST['email'];
	$mobile = $_POST['mobile'];
	
	if(empty($fn))
	{
		$error1="Please Enter the Name";
	}
	else if(empty($_POST['f1']))
	{
		$error2="Please Choose the Gender";
	}
	
		else if(empty($email))
	{
		$error3="Please Enter the Email Id";
	}
	
	else if(!filter_var($email,FILTER_VALIDATE_EMAIL))
	{
		$error3="Please Enter the Right Email FOrmat";
	}
	
	else if(empty($mobile))
	{
		$error4="Please Enter the Mobile Number";
	}
	
	else if(!preg_match("/[0-9]/",$mobile))
	{
		$error4="Only Number Format";
	}
	
		
	else if(strlen($mobile)!=10)
	{
		$error4="Only 10 Digit Number";
	}
	
	else{
		
		
		$data = $fn." ".$_POST['f1']." ".$email." ".$mobile;
	}
	
}
 
 ?>
 
 <html>
 <head>
 <title> form validation </title>
 </head>
 <body>
 <form method="post">
 <input type="Text" placeholder="FullName" name="fn">
 <span><?php echo $error1;?> </span>
 <br><br>
 <input type="radio" name="f1" value="Female"> Female
 <input type="radio" name="f1" value="Male"> Male <span><?php echo $error2;?> </span>
 <br><Br>
 <input type="text" placeholder="Enter Email" name="email"> <span><?php echo $error3;?> </span><br><br>
 <input type="text" placeholder="Mobile Number" name="mobile"> <span><?php echo $error4;?> </span><br><br>
 <button name="sb"> Submit </button>
 
 </form>
 
 <?php
 
 if(isset($data))
 {
	 echo $data."<br>";
	 
 }
 
 ?>
 
 
 </body></html>
