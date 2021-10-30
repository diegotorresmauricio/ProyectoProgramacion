-- MySQL Workbench Synchronization
-- Generated: 2021-10-11 20:13
-- Model: New Model
-- Version: 1.0
-- Project: Name of the project
-- Author: overd

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;

CREATE TABLE IF NOT EXISTS `mydb`.`cliente` (
  `IDCliente` INT(11) NOT NULL AUTO_INCREMENT,
  `nombre` VARCHAR(45) NOT NULL,
  `apellido` VARCHAR(45) NOT NULL,
  `mail` VARCHAR(45) NOT NULL,
  `dni` VARCHAR(45) NOT NULL,
  `direccion` VARCHAR(45) NOT NULL,
  `telefono` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`IDCliente`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;

CREATE TABLE IF NOT EXISTS `mydb`.`repuesto` (
  `IDRepuesto` INT(11) NOT NULL AUTO_INCREMENT,
  `marca` VARCHAR(45) NOT NULL,
  `tipo` VARCHAR(45) NOT NULL,
  `valor` INT(11) NOT NULL,
  PRIMARY KEY (`IDRepuesto`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;

CREATE TABLE IF NOT EXISTS `mydb`.`presupuesto` (
  `IDPresupuesto` INT(11) NOT NULL AUTO_INCREMENT,
  `manoObra` INT(11) NOT NULL,
  `total` INT(11) NOT NULL,
  `cliente_IDCliente` INT(11) NOT NULL,
  `repuesto_IDRepuesto` INT(11) NOT NULL,
  PRIMARY KEY (`IDPresupuesto`, `cliente_IDCliente`, `repuesto_IDRepuesto`),
  INDEX `fk_presupuesto_cliente_idx` (`cliente_IDCliente` ASC) VISIBLE,
  INDEX `fk_presupuesto_repuesto1_idx` (`repuesto_IDRepuesto` ASC) VISIBLE,
  CONSTRAINT `fk_presupuesto_cliente`
    FOREIGN KEY (`cliente_IDCliente`)
    REFERENCES `mydb`.`cliente` (`IDCliente`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_presupuesto_repuesto1`
    FOREIGN KEY (`repuesto_IDRepuesto`)
    REFERENCES `mydb`.`repuesto` (`IDRepuesto`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;

CREATE TABLE IF NOT EXISTS `mydb`.`Conocimiento` (
  `ID` INT(11) NOT NULL AUTO_INCREMENT,
  `Enlace` VARCHAR(255) NOT NULL,
  `Descripcion` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`ID`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
