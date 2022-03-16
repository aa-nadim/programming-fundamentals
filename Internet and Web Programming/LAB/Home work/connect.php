<?php
	$Name = $_POST['name'];
	$Email = $_POST['email'];
	$Message = $_POST['message'];
	
	$con=mysqli_connect('localhost','root','','test');
	$conn = new mysqli('localhost','root','','test');
	if($conn-> connect_error)
	{
		die("Connection Failed:" .$conn->connect_error);
	}
	else
	{
		$stmt= $conn->prepare("insert into register(Name, Email, Message)
		values(?, ?, ?)");
		$stmt-> bind_param("sss", $Name, $Email, $Message);
		$stmt->execute();
		echo "Registration Successfull";
		$stmt->store_result();
		$stmt->close();
		$conn->close();
	}
?>
