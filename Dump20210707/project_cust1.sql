-- MySQL dump 10.13  Distrib 8.0.25, for Win64 (x86_64)
--
-- Host: localhost    Database: project
-- ------------------------------------------------------
-- Server version	8.0.25

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

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
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-07-07 10:31:04
