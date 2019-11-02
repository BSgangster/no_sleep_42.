<?php
class init {
  private $dbh;

  function __construct() {
    require_once '../model/db.php';
    $this->dbh = $this->connectionDB();
    $this->createDB();
    $td = new database();

    $td->execute("create table if not exists `Users` (
      id   INT              NOT NULL AUTO_INCREMENT,
      username VARCHAR (256)     NOT NULL,
      password VARCHAR (256)     NOT NULL,
      email VARCHAR (256) NOT NULL,
      account_validated BIT NULL,
      unique_token VARCHAR (256)     NOT NULL,
      creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,
      profile_picture VARCHAR (256) DEFAULT 'public/pictures/profile/default-profile-picture.png',
      comments_notification BIT DEFAULT 1,
      PRIMARY KEY (ID)
    )");

    $td->execute('create table if not exists `Pictures` (
      id   INT              NOT NULL AUTO_INCREMENT,
      userId INT NOT NULL,
      file_path VARCHAR (256)     NOT NULL,
      creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,
      PRIMARY KEY (ID)
    )');

    $td->execute('create table if not exists `Comments` (
      id   INT              NOT NULL AUTO_INCREMENT,
      pictureId INT NOT NULL,
      userId INT NOT NULL,
      content TEXT NOT NULL,
      creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,
      PRIMARY KEY (ID)
    )');

    $td->execute('create table if not exists `Likes` (
      id   INT              NOT NULL AUTO_INCREMENT,
      pictureId INT NOT NULL,
      userId INT NOT NULL,
      creation_date DATETIME DEFAULT CURRENT_TIMESTAMP,
      PRIMARY KEY (ID)
    )');
    $td->disconnect();
  }

  function connectionDB() {
    require 'database.php';
    try {
      $dbh = new PDO("mysql:host=" . $DB_HOST, $DB_USER, $DB_PASSWORD);
    } catch (PDOException $e) { 
      die('\DB ERROR : ' .$e->getMessage());
    }
    return $dbh;

  function createDB() {
    require 'database.php';
    $sql = $this->dbh->exec("CREATE DATABASE IF NOT EXISTS `$DB_NAME`;
            CREATE USER '$DB_USER'@'localhost' IDENTIFIED BY '$DB_PASSWORD';
            GRANT ALL PRIVILEGES ON `$DB_NAME`.* TO '$DB_USER'@'localhost';
            FLUSH PRIVILEGES;")
    or die(print('Error - createDB: ').print_r($this->dbh->errorInfo(), true));
    echo "Database `$DB_NAME` created <br>";
  }

  function deleteDB() {
    require 'database.php';
    $sql = $this->dbh->exec("DROP DATABASE `$DB_NAME`")
    or die(print('Error - deleteDB: ').print_r($this->dbh->errorInfo(), true));
    echo "Database `$DB_NAME` deleted <br>";
  }
}

include('./database.php');
$create = new init();
