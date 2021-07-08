-- MySQL dump 10.13  Distrib 8.0.25, for Win64 (x86_64)
--
-- Host: localhost    Database: project
-- ------------------------------------------------------
-- Server version	8.0.25

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `baked_toast`
--

DROP TABLE IF EXISTS `baked_toast`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `baked_toast` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `baked_toast`
--

LOCK TABLES `baked_toast` WRITE;
/*!40000 ALTER TABLE `baked_toast` DISABLE KEYS */;
INSERT INTO `baked_toast` VALUES ('1','Garlic Bread','100'),('2','Cheesy Garlic Bread','120'),('3','Spicy cheesy Garlic Bread','140'),('4','Garlic Bread supreme','140');
/*!40000 ALTER TABLE `baked_toast` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `bill`
--

DROP TABLE IF EXISTS `bill`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `bill` (
  `id` varchar(50) DEFAULT NULL,
  `name` varchar(255) DEFAULT NULL,
  `price` bigint DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bill`
--

LOCK TABLES `bill` WRITE;
/*!40000 ALTER TABLE `bill` DISABLE KEYS */;
/*!40000 ALTER TABLE `bill` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `burger`
--

DROP TABLE IF EXISTS `burger`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `burger` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `burger`
--

LOCK TABLES `burger` WRITE;
/*!40000 ALTER TABLE `burger` DISABLE KEYS */;
INSERT INTO `burger` VALUES ('1','Aloo Tikki burger','50'),('3','cheesy burger','70'),('4','double decket burger','80'),('5','Grill burger','60');
/*!40000 ALTER TABLE `burger` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cake`
--

DROP TABLE IF EXISTS `cake`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cake` (
  `b_id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  `id` varchar(50) DEFAULT NULL,
  `dates` date DEFAULT NULL,
  PRIMARY KEY (`b_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cake`
--

LOCK TABLES `cake` WRITE;
/*!40000 ALTER TABLE `cake` DISABLE KEYS */;
INSERT INTO `cake` VALUES ('1','main','2',NULL,NULL);
/*!40000 ALTER TABLE `cake` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `coffee`
--

DROP TABLE IF EXISTS `coffee`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `coffee` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `coffee`
--

LOCK TABLES `coffee` WRITE;
/*!40000 ALTER TABLE `coffee` DISABLE KEYS */;
INSERT INTO `coffee` VALUES ('1','Espresso','60'),('2','Coffee with Cream','60'),('3','Cold Coffee','60'),('4','Hot Coffee','40'),('5','Black Coffee','50'),('6','Chocolate Coffee1','80');
/*!40000 ALTER TABLE `coffee` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cust`
--

DROP TABLE IF EXISTS `cust`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cust` (
  `id` int DEFAULT NULL,
  `email` varchar(225) DEFAULT NULL,
  `date` varchar(225) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cust`
--

LOCK TABLES `cust` WRITE;
/*!40000 ALTER TABLE `cust` DISABLE KEYS */;
/*!40000 ALTER TABLE `cust` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cust1`
--

DROP TABLE IF EXISTS `cust1`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cust1` (
  `email` varchar(255) DEFAULT NULL,
  `orders` varchar(255) DEFAULT NULL,
  `dates` varchar(255) DEFAULT NULL,
  `times` varchar(255) DEFAULT NULL,
  `total` varchar(255) DEFAULT NULL,
  `grandtotal` varchar(255) DEFAULT NULL,
  `id` int NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=60 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cust1`
--

LOCK TABLES `cust1` WRITE;
/*!40000 ALTER TABLE `cust1` DISABLE KEYS */;
INSERT INTO `cust1` VALUES ('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:13:32 PM','505','530.25',23),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:15:56 PM','505','530.25',24),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:20 PM','505','530.25',25),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:23 PM','505','530.25',26),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme,Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:23 PM','505','530.25',27),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:25 PM','505','530.25',28),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:26 PM','505','530.25',29),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:28:39 PM','505','530.25',30),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:31:13 PM','505','530.25',31),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:36:46 PM','505','530.25',32),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:43:49 PM','505','530.25',33),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme,Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:45:12 PM','505','530.25',34),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme,Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme,Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:45:24 PM','505','530.25',35),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:48:18 PM','505','530.25',36),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:48:50 PM','505','530.25',37),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:54:23 PM','505','530.25',38),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme,Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:54:39 PM','505','530.25',39),('akshaymithari98@gmail.com',',Split pea,Grill burger,Passion Fruit smoothie,Garlic Bread supreme','7/5/2021','5:57:51 PM','505','530.25',40),('akshay@gmail.com',',Grill burger','7/5/2021','6:21:38 PM','60','63',43),('akshaymithari98@gmail.com',',Hot Coffee,Spicy cheesy Garlic Bread','7/5/2021','6:31:32 PM','180','189',44),('akshaymithari98@gmail.com',',Club Sandwitch,double decket burger','7/5/2021','11:15:46 PM','140','133',45),('akshaymithari98@gmail.com',',Spicy cheesy Garlic Bread','7/5/2021','11:17:25 PM','140','133',46),('akshaymithari98@gmail.com',',Coffee with Cream,Passion Fruit smoothie','7/5/2021','11:26:45 PM','230','218.5',47),('akshaymithari@gmail.com',',Cold Coffee,Passion Fruit smoothie','7/6/2021','6:06:52 PM','230','230',49),('akshaymithari98@gmail.com',',cheesy burger,Cold Coffee','7/6/2021','6:37:05 PM','130','136.5',50),('akshaymithari98@gmail.com',',Hot Coffee','7/6/2021','6:53:09 PM','40','42',51),('akshaymithari@gmail.com',',Cold Coffee,Garlic Bread supreme','7/6/2021','6:58:09 PM','200','210',52),('akshaymithari98@gmail.com',',Cold Coffee,Spicy cheesy Garlic Bread','7/6/2021','7:01:53 PM','200','190',53),('akshaymithari@gmail.com',',Split pea,Cold Coffee','7/6/2021','8:28:02 PM','195','204.75',54),('akshaymithari@gmail.com',',Split pea','7/6/2021','8:29:59 PM','135','141.75',55),('akshaymithari98@gmail.com',',Cold Coffee','7/6/2021','8:35:19 PM','60','60',56),('akshaymithari@gmail.com',',Grill burger,Hot Coffee','7/7/2021','9:16:52 AM','100','105',57),('akshaymithari@gmail.com',',Hot Coffee,Grill burger','7/7/2021','9:18:43 AM','100','105',58),('akshaymithari@gmail.com',',Cold Coffee','7/7/2021','9:22:53 AM','60','63',59);
/*!40000 ALTER TABLE `cust1` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `desert`
--

DROP TABLE IF EXISTS `desert`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `desert` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `desert`
--

LOCK TABLES `desert` WRITE;
/*!40000 ALTER TABLE `desert` DISABLE KEYS */;
INSERT INTO `desert` VALUES ('1','Chocolate Donat','65'),('2','Brownie','70'),('3','Brownie with ice-creame','80'),('4','Cheese Cake','55'),('5','Chocolate Tart','60');
/*!40000 ALTER TABLE `desert` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `emp`
--

DROP TABLE IF EXISTS `emp`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `emp` (
  `emp_id` int DEFAULT NULL,
  `lastname` varchar(255) DEFAULT NULL,
  `firstname` varchar(255) DEFAULT NULL,
  `address` varchar(255) DEFAULT NULL,
  `city` varchar(255) DEFAULT NULL,
  `date_of_join` varchar(255) DEFAULT NULL,
  `salary` varchar(50) DEFAULT NULL,
  `password1` varchar(50) NOT NULL,
  `email` varchar(255) DEFAULT NULL,
  `mobile_no` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`password1`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `emp`
--

LOCK TABLES `emp` WRITE;
/*!40000 ALTER TABLE `emp` DISABLE KEYS */;
INSERT INTO `emp` VALUES (1,'Mithari','Akshay','2/54 mangavkarbol','ichalkaranji','20/2/2021','20000','Akshay@123','akshaymithari98@gmail.com','8830189365');
/*!40000 ALTER TABLE `emp` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `icecream`
--

DROP TABLE IF EXISTS `icecream`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `icecream` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `icecream`
--

LOCK TABLES `icecream` WRITE;
/*!40000 ALTER TABLE `icecream` DISABLE KEYS */;
INSERT INTO `icecream` VALUES ('1','vanilla','55'),('2','Two in one','75'),('3','Chocolate','65'),('4','Butter Scotch','65');
/*!40000 ALTER TABLE `icecream` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `offer`
--

DROP TABLE IF EXISTS `offer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `offer` (
  `id` int NOT NULL AUTO_INCREMENT,
  `email` varchar(225) DEFAULT NULL,
  `offerpercentage` bigint DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `offer`
--

LOCK TABLES `offer` WRITE;
/*!40000 ALTER TABLE `offer` DISABLE KEYS */;
INSERT INTO `offer` VALUES (6,'akshaymithari98@gmail.com',2);
/*!40000 ALTER TABLE `offer` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pasta`
--

DROP TABLE IF EXISTS `pasta`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pasta` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pasta`
--

LOCK TABLES `pasta` WRITE;
/*!40000 ALTER TABLE `pasta` DISABLE KEYS */;
INSERT INTO `pasta` VALUES ('1','Veg pasta','90.00'),('2','pasta Italiano white','90.00'),('3','pasta Italiano red source','100.00'),('4','cheese corn pasta','100.00');
/*!40000 ALTER TABLE `pasta` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pizza`
--

DROP TABLE IF EXISTS `pizza`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pizza` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pizza`
--

LOCK TABLES `pizza` WRITE;
/*!40000 ALTER TABLE `pizza` DISABLE KEYS */;
INSERT INTO `pizza` VALUES ('1','Veg cheesy pizza','90'),('2','non veg cheesy pizza','150'),('3','Mexican pizza','100'),('4','Double cheese pizza','150'),('5','Cheesy corn pizza','110'),('6','Chilli paneer pizza','110'),('7','Farm house pizza','100');
/*!40000 ALTER TABLE `pizza` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `potato`
--

DROP TABLE IF EXISTS `potato`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `potato` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `potato`
--

LOCK TABLES `potato` WRITE;
/*!40000 ALTER TABLE `potato` DISABLE KEYS */;
INSERT INTO `potato` VALUES ('1','French Fries','90'),('2','Masala French Fries','90'),('3','French Fries load','100'),('4','French Fries load','100');
/*!40000 ALTER TABLE `potato` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sandwitch`
--

DROP TABLE IF EXISTS `sandwitch`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `sandwitch` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sandwitch`
--

LOCK TABLES `sandwitch` WRITE;
/*!40000 ALTER TABLE `sandwitch` DISABLE KEYS */;
INSERT INTO `sandwitch` VALUES ('1','Veg Cheesy Sandwitch','50'),('2','Bread pizza Sandwitch','40'),('3','Cheese Aloo Tikki Sandwitch','60'),('4','Club Sandwitch','60'),('5','Cheese chocolate Sandwitch','60');
/*!40000 ALTER TABLE `sandwitch` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `smoothes`
--

DROP TABLE IF EXISTS `smoothes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `smoothes` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `smoothes`
--

LOCK TABLES `smoothes` WRITE;
/*!40000 ALTER TABLE `smoothes` DISABLE KEYS */;
INSERT INTO `smoothes` VALUES ('1','Strawberry smothie','160'),('2','Mango smoothie','180'),('3','Passion Fruit smoothie','170'),('4','Passion Fruit smoothie','170');
/*!40000 ALTER TABLE `smoothes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `soup`
--

DROP TABLE IF EXISTS `soup`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `soup` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `price` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `soup`
--

LOCK TABLES `soup` WRITE;
/*!40000 ALTER TABLE `soup` DISABLE KEYS */;
INSERT INTO `soup` VALUES ('1','Cream of Potato','145'),('2','Split pea','135'),('3','Tomato Soup','140');
/*!40000 ALTER TABLE `soup` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-07-08 20:48:46
