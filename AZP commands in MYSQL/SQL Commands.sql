--todo ------CREATE DB------------------------------------------------------------
CREATE DATABASE TUTORIALS;
--todo ------CREAT TB-------------------------------------------------------------
CREATE TABLE tutorials_tbl(
    tutorial_id INT NOT NULL AUTO_INCREMENT,
    tutorial_title VARCHAR (100) NOT NULL,
    tutorial_author VARCHAR(40) NOT NULL,
    submission_date DATE,
    --? also we can write upLine code like this :
    - - ? = > submission_date DATE NULL,
    PRIMARY KEY (tutorial_id)
)
/* optional */
AUTO_INCREMENT = 100;
--* before insert data in table we can change the auto increment intial value 
ALTER TABLE penguins AUTO_INCREMENT = 100;
--! for change in all tables in DB
SET @ @GLOBAL.auto_increment_increment = 1;
--todo -------INSERT ------------------------------------------------------------
INSERT INTO tutorials_tbl (tutorial_title, tutorial_author, submission_date)
VALUES ("Learn MySQL", "Abdul S", NOW());
INSERT INTO tutorials_tbl (tutorial_title, tutorial_author, submission_date)
VALUES ("JAVA Tutorial", "Sanjay", '2007-05-06');