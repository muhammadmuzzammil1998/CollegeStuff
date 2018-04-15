<?php
  $servername = "localhost";
  $username = "root";
  $password = "PASSWORD";
  $DB = "college";
  $conn = new mysqli($servername, $username, $password, $DB);

  if($conn->connect_error){
    echo $conn->connect_error;
    return;
  }
  $name = $_POST["name"]; 
  $enum = $_POST["enum"];
  $email = $_POST["email"]; 
  $dob = $_POST[dob]; 
  $gender = $_POST["gender"];
  $sql = mysqli_query($conn, "INSERT INTO STUDENTS VALUES ('$name', '$enum', '$email', '$dob', '$gender')");
  $conn->query($sql);
  echo "Registration complete!";
  $conn->close();
?>


