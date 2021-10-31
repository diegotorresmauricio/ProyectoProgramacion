-- phpMyAdmin SQL Dump
-- version 3.5.1
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 31-10-2021 a las 22:10:50
-- Versión del servidor: 5.5.24-log
-- Versión de PHP: 5.4.3

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de datos: `taller`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cliente`
--

CREATE TABLE IF NOT EXISTS `cliente` (
  `IDCliente` int(15) NOT NULL AUTO_INCREMENT,
  `Nombre` varchar(25) COLLATE utf8_spanish_ci NOT NULL,
  `Apellido` varchar(25) COLLATE utf8_spanish_ci NOT NULL,
  `Mail` varchar(250) COLLATE utf8_spanish_ci NOT NULL,
  `DNI` varchar(8) COLLATE utf8_spanish_ci NOT NULL,
  `Direccion` varchar(50) COLLATE utf8_spanish_ci NOT NULL,
  `Telefono` varchar(15) COLLATE utf8_spanish_ci NOT NULL,
  PRIMARY KEY (`IDCliente`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci AUTO_INCREMENT=6 ;

--
-- Volcado de datos para la tabla `cliente`
--

INSERT INTO `cliente` (`IDCliente`, `Nombre`, `Apellido`, `Mail`, `DNI`, `Direccion`, `Telefono`) VALUES
(4, 'Diego', 'Torres', 'diegotorresmauricio@gmail.com', '31536459', 'Pavon 511', '1123870428'),
(5, 'Felipe', 'Torres', 'felipe@felipe.com', '56391888', 'pavon 511', '1122334455');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `conocimiento`
--

CREATE TABLE IF NOT EXISTS `conocimiento` (
  `ID` int(25) NOT NULL AUTO_INCREMENT,
  `link` varchar(250) COLLATE utf8_spanish_ci NOT NULL,
  `descripcion` varchar(250) COLLATE utf8_spanish_ci NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci AUTO_INCREMENT=9 ;

--
-- Volcado de datos para la tabla `conocimiento`
--

INSERT INTO `conocimiento` (`ID`, `link`, `descripcion`) VALUES
(2, 'www.google.com', 'Google'),
(3, 'www.google.com', 'Google'),
(4, 'www.google.com', 'Google'),
(5, 'www.microsoft.com', 'Microsoft');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `presupuesto`
--

CREATE TABLE IF NOT EXISTS `presupuesto` (
  `id` int(15) NOT NULL,
  `IDCliente` int(15) NOT NULL,
  `Valor` int(15) NOT NULL,
  `ManoObra` int(15) NOT NULL,
  `Total` int(15) NOT NULL,
  PRIMARY KEY (`IDCliente`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `repuesto`
--

CREATE TABLE IF NOT EXISTS `repuesto` (
  `IDRepuesto` int(15) NOT NULL AUTO_INCREMENT,
  `Marca` varchar(50) COLLATE utf8_spanish_ci NOT NULL,
  `Tipo` varchar(50) COLLATE utf8_spanish_ci NOT NULL,
  `Valor` int(20) NOT NULL,
  PRIMARY KEY (`IDRepuesto`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci AUTO_INCREMENT=3 ;

--
-- Volcado de datos para la tabla `repuesto`
--

INSERT INTO `repuesto` (`IDRepuesto`, `Marca`, `Tipo`, `Valor`) VALUES
(1, 'Valeo', 'Burro vw gol', 6000),
(2, 'Renault', 'Lampara', 300);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
