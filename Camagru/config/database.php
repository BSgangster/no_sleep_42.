<?php
  $DB_HOST = '127.0.0.1';
  $DB_NAME = 'db_camagru';
  $DB_DSN = 'mysql:dbname='.$DB_NAME.';host='.$DB_HOST;
  $DB_USER = 'root';
  $DB_PASSWORD = '';
  $DB_OPTIONS = array(
    PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION,
    PDO::MYSQL_ATTR_INIT_COMMAND => 'SET NAMES utf8',
  );