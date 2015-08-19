C/*--------------------------------------------------------
C// NC 1pi0 BG ratio table (after miss ID with polfit)
C// Enu(GeV),NCQE,NCRS,NCDI,NCCO+NCDF,NCTotal
C---------------------------------------------------------*/
      real*8 am_ratioNC(120,6)
      data (am_ratioNC(1,oi),oi=1,6) / 0.02500, 0, 0, 0, 0, 0 /
      data (am_ratioNC(2,oi),oi=1,6) / 0.07500, 0, 0, 0, 0, 0 /
      data (am_ratioNC(3,oi),oi=1,6) / 0.12500, 0, 0, 0, 0, 0 /
      data (am_ratioNC(4,oi),oi=1,6) / 0.17500, 0, 0, 0, 0, 0 /
      data (am_ratioNC(5,oi),oi=1,6) / 0.22500, 0, 0, 0, 0.00019, 0.00019 /
      data (am_ratioNC(6,oi),oi=1,6) / 0.27500, 0, 0.00001, 0, 0.00095, 0.00096 /
      data (am_ratioNC(7,oi),oi=1,6) / 0.32500, 0, 0.00013, 0, 0.00195, 0.00208 /
      data (am_ratioNC(8,oi),oi=1,6) / 0.37500, 0, 0.00050, 0, 0.00292, 0.00342 /
      data (am_ratioNC(9,oi),oi=1,6) / 0.42500, 0, 0.00110, 0, 0.00383, 0.00493 /
      data (am_ratioNC(10,oi),oi=1,6) / 0.47500, 0, 0.00196, 0, 0.00508, 0.00704 /
      data (am_ratioNC(11,oi),oi=1,6) / 0.52500, 0, 0.00286, 0, 0.00649, 0.00935 /
      data (am_ratioNC(12,oi),oi=1,6) / 0.57500, 0, 0.00381, 0, 0.00762, 0.01143 /
      data (am_ratioNC(13,oi),oi=1,6) / 0.62500, 0, 0.00470, 0, 0.00855, 0.01325 /
      data (am_ratioNC(14,oi),oi=1,6) / 0.67500, 0, 0.00576, 0, 0.00892, 0.01468 /
      data (am_ratioNC(15,oi),oi=1,6) / 0.72500, 0, 0.00672, 0, 0.00923, 0.01595 /
      data (am_ratioNC(16,oi),oi=1,6) / 0.77500, 0, 0.00766, 0, 0.00950, 0.01716 /
      data (am_ratioNC(17,oi),oi=1,6) / 0.82500, 0, 0.00859, 0, 0.00960, 0.01819 /
      data (am_ratioNC(18,oi),oi=1,6) / 0.87500, 0.00001, 0.00961, 0, 0.00991, 0.01953 /
      data (am_ratioNC(19,oi),oi=1,6) / 0.92500, 0.00001, 0.01049, 0, 0.00958, 0.02008 /
      data (am_ratioNC(20,oi),oi=1,6) / 0.97500, 0.00002, 0.01133, 0, 0.01005, 0.02140 /
      data (am_ratioNC(21,oi),oi=1,6) / 1.02500, 0.00003, 0.01223, 0, 0.01025, 0.02251 /
      data (am_ratioNC(22,oi),oi=1,6) / 1.07500, 0.00002, 0.01322, 0, 0.01028, 0.02352 /
      data (am_ratioNC(23,oi),oi=1,6) / 1.12500, 0.00003, 0.01440, 0, 0.01044, 0.02487 /
      data (am_ratioNC(24,oi),oi=1,6) / 1.17500, 0.00004, 0.01522, 0, 0.01046, 0.02572 /
      data (am_ratioNC(25,oi),oi=1,6) / 1.22500, 0.00005, 0.01603, 0, 0.01069, 0.02677 /
      data (am_ratioNC(26,oi),oi=1,6) / 1.27500, 0.00005, 0.01692, 0.00001, 0.01086, 0.02784 /
      data (am_ratioNC(27,oi),oi=1,6) / 1.32500, 0.00005, 0.01757, 0.00005, 0.01109, 0.02876 /
      data (am_ratioNC(28,oi),oi=1,6) / 1.37500, 0.00006, 0.01852, 0.00003, 0.01115, 0.02976 /
      data (am_ratioNC(29,oi),oi=1,6) / 1.42500, 0.00006, 0.01946, 0.00005, 0.01114, 0.03071 /
      data (am_ratioNC(30,oi),oi=1,6) / 1.47500, 0.00006, 0.02002, 0.00015, 0.01163, 0.03186 /
      data (am_ratioNC(31,oi),oi=1,6) / 1.52500, 0.00008, 0.02096, 0.00021, 0.01135, 0.03260 /
      data (am_ratioNC(32,oi),oi=1,6) / 1.57500, 0.00009, 0.02136, 0.00018, 0.01149, 0.03312 /
      data (am_ratioNC(33,oi),oi=1,6) / 1.62500, 0.00008, 0.02223, 0.00026, 0.01229, 0.03486 /
      data (am_ratioNC(34,oi),oi=1,6) / 1.67500, 0.00009, 0.02263, 0.00031, 0.01219, 0.03522 /
      data (am_ratioNC(35,oi),oi=1,6) / 1.72500, 0.00009, 0.02380, 0.00050, 0.01227, 0.03666 /
      data (am_ratioNC(36,oi),oi=1,6) / 1.77500, 0.00011, 0.02439, 0.00057, 0.01280, 0.03787 /
      data (am_ratioNC(37,oi),oi=1,6) / 1.82500, 0.00008, 0.02478, 0.00065, 0.01251, 0.03802 /
      data (am_ratioNC(38,oi),oi=1,6) / 1.87500, 0.00010, 0.02536, 0.00077, 0.01262, 0.03885 /
      data (am_ratioNC(39,oi),oi=1,6) / 1.92500, 0.00010, 0.02620, 0.00095, 0.01290, 0.04015 /
      data (am_ratioNC(40,oi),oi=1,6) / 1.97500, 0.00010, 0.02629, 0.00115, 0.01320, 0.04074 /
      data (am_ratioNC(41,oi),oi=1,6) / 2.02500, 0.00009, 0.02643, 0.00141, 0.01294, 0.04087 /
      data (am_ratioNC(42,oi),oi=1,6) / 2.07500, 0.00010, 0.02683, 0.00169, 0.01357, 0.04219 /
      data (am_ratioNC(43,oi),oi=1,6) / 2.12500, 0.00011, 0.02760, 0.00200, 0.01355, 0.04326 /
      data (am_ratioNC(44,oi),oi=1,6) / 2.17500, 0.00014, 0.02792, 0.00210, 0.01373, 0.04389 /
      data (am_ratioNC(45,oi),oi=1,6) / 2.22500, 0.00011, 0.02810, 0.00253, 0.01388, 0.04462 /
      data (am_ratioNC(46,oi),oi=1,6) / 2.27500, 0.00011, 0.02844, 0.00283, 0.01433, 0.04571 /
      data (am_ratioNC(47,oi),oi=1,6) / 2.32500, 0.00013, 0.02886, 0.00317, 0.01388, 0.04604 /
      data (am_ratioNC(48,oi),oi=1,6) / 2.37500, 0.00011, 0.02914, 0.00323, 0.01433, 0.04681 /
      data (am_ratioNC(49,oi),oi=1,6) / 2.42500, 0.00011, 0.02853, 0.00381, 0.01412, 0.04657 /
      data (am_ratioNC(50,oi),oi=1,6) / 2.47500, 0.00014, 0.02935, 0.00398, 0.01436, 0.04783 /
      data (am_ratioNC(51,oi),oi=1,6) / 2.52500, 0.00012, 0.03002, 0.00383, 0.01474, 0.04871 /
      data (am_ratioNC(52,oi),oi=1,6) / 2.57500, 0.00013, 0.02999, 0.00426, 0.01433, 0.04871 /
      data (am_ratioNC(53,oi),oi=1,6) / 2.62500, 0.00014, 0.03012, 0.00436, 0.01449, 0.04911 /
      data (am_ratioNC(54,oi),oi=1,6) / 2.67500, 0.00015, 0.02986, 0.00499, 0.01447, 0.04947 /
      data (am_ratioNC(55,oi),oi=1,6) / 2.72500, 0.00014, 0.03034, 0.00504, 0.01468, 0.05020 /
      data (am_ratioNC(56,oi),oi=1,6) / 2.77500, 0.00014, 0.03047, 0.00519, 0.01447, 0.05027 /
      data (am_ratioNC(57,oi),oi=1,6) / 2.82500, 0.00015, 0.03028, 0.00574, 0.01512, 0.05129 /
      data (am_ratioNC(58,oi),oi=1,6) / 2.87500, 0.00014, 0.02987, 0.00559, 0.01460, 0.05020 /
      data (am_ratioNC(59,oi),oi=1,6) / 2.92500, 0.00014, 0.03070, 0.00627, 0.01499, 0.05210 /
      data (am_ratioNC(60,oi),oi=1,6) / 2.97500, 0.00014, 0.03041, 0.00628, 0.01523, 0.05206 /
      data (am_ratioNC(61,oi),oi=1,6) / 3.02500, 0.00013, 0.03063, 0.00676, 0.01482, 0.05234 /
      data (am_ratioNC(62,oi),oi=1,6) / 3.07500, 0.00013, 0.03038, 0.00679, 0.01540, 0.05270 /
      data (am_ratioNC(63,oi),oi=1,6) / 3.12500, 0.00012, 0.03039, 0.00732, 0.01532, 0.05315 /
      data (am_ratioNC(64,oi),oi=1,6) / 3.17500, 0.00015, 0.03050, 0.00728, 0.01509, 0.05302 /
      data (am_ratioNC(65,oi),oi=1,6) / 3.22500, 0.00013, 0.03085, 0.00721, 0.01525, 0.05344 /
      data (am_ratioNC(66,oi),oi=1,6) / 3.27500, 0.00012, 0.03004, 0.00764, 0.01551, 0.05331 /
      data (am_ratioNC(67,oi),oi=1,6) / 3.32500, 0.00015, 0.03030, 0.00794, 0.01516, 0.05355 /
      data (am_ratioNC(68,oi),oi=1,6) / 3.37500, 0.00013, 0.03069, 0.00803, 0.01596, 0.05481 /
      data (am_ratioNC(69,oi),oi=1,6) / 3.42500, 0.00015, 0.03095, 0.00823, 0.01520, 0.05453 /
      data (am_ratioNC(70,oi),oi=1,6) / 3.47500, 0.00016, 0.03052, 0.00852, 0.01541, 0.05461 /
      data (am_ratioNC(71,oi),oi=1,6) / 3.52500, 0.00015, 0.03071, 0.00851, 0.01584, 0.05521 /
      data (am_ratioNC(72,oi),oi=1,6) / 3.57500, 0.00018, 0.03071, 0.00869, 0.01581, 0.05539 /
      data (am_ratioNC(73,oi),oi=1,6) / 3.62500, 0.00013, 0.03049, 0.00902, 0.01550, 0.05514 /
      data (am_ratioNC(74,oi),oi=1,6) / 3.67500, 0.00018, 0.03068, 0.00896, 0.01615, 0.05597 /
      data (am_ratioNC(75,oi),oi=1,6) / 3.72500, 0.00014, 0.03058, 0.00916, 0.01585, 0.05573 /
      data (am_ratioNC(76,oi),oi=1,6) / 3.77500, 0.00016, 0.03076, 0.00983, 0.01586, 0.05661 /
      data (am_ratioNC(77,oi),oi=1,6) / 3.82500, 0.00013, 0.03045, 0.00951, 0.01574, 0.05583 /
      data (am_ratioNC(78,oi),oi=1,6) / 3.87500, 0.00016, 0.03052, 0.00929, 0.01526, 0.05523 /
      data (am_ratioNC(79,oi),oi=1,6) / 3.92500, 0.00018, 0.02962, 0.01004, 0.01600, 0.05584 /
      data (am_ratioNC(80,oi),oi=1,6) / 3.97500, 0.00017, 0.03082, 0.01012, 0.01655, 0.05766 /
      data (am_ratioNC(81,oi),oi=1,6) / 4.02500, 0.00017, 0.02971, 0.00993, 0.01622, 0.05603 /
      data (am_ratioNC(82,oi),oi=1,6) / 4.07500, 0.00016, 0.03059, 0.01034, 0.01602, 0.05711 /
      data (am_ratioNC(83,oi),oi=1,6) / 4.12500, 0.00015, 0.03000, 0.01074, 0.01657, 0.05746 /
      data (am_ratioNC(84,oi),oi=1,6) / 4.17500, 0.00014, 0.02901, 0.01004, 0.01625, 0.05544 /
      data (am_ratioNC(85,oi),oi=1,6) / 4.22500, 0.00015, 0.02959, 0.01039, 0.01606, 0.05619 /
      data (am_ratioNC(86,oi),oi=1,6) / 4.27500, 0.00014, 0.03026, 0.01094, 0.01631, 0.05765 /
      data (am_ratioNC(87,oi),oi=1,6) / 4.32500, 0.00015, 0.02959, 0.01089, 0.01602, 0.05665 /
      data (am_ratioNC(88,oi),oi=1,6) / 4.37500, 0.00015, 0.02987, 0.01038, 0.01658, 0.05698 /
      data (am_ratioNC(89,oi),oi=1,6) / 4.42500, 0.00015, 0.03006, 0.01127, 0.01629, 0.05777 /
      data (am_ratioNC(90,oi),oi=1,6) / 4.47500, 0.00015, 0.03039, 0.01121, 0.01583, 0.05758 /
      data (am_ratioNC(91,oi),oi=1,6) / 4.52500, 0.00014, 0.02929, 0.01127, 0.01632, 0.05702 /
      data (am_ratioNC(92,oi),oi=1,6) / 4.57500, 0.00017, 0.02976, 0.01142, 0.01655, 0.05790 /
      data (am_ratioNC(93,oi),oi=1,6) / 4.62500, 0.00014, 0.02956, 0.01147, 0.01613, 0.05730 /
      data (am_ratioNC(94,oi),oi=1,6) / 4.67500, 0.00015, 0.02962, 0.01194, 0.01660, 0.05831 /
      data (am_ratioNC(95,oi),oi=1,6) / 4.72500, 0.00018, 0.02916, 0.01150, 0.01600, 0.05684 /
      data (am_ratioNC(96,oi),oi=1,6) / 4.77500, 0.00015, 0.02925, 0.01153, 0.01613, 0.05706 /
      data (am_ratioNC(97,oi),oi=1,6) / 4.82500, 0.00016, 0.02862, 0.01164, 0.01648, 0.05690 /
      data (am_ratioNC(98,oi),oi=1,6) / 4.87500, 0.00014, 0.02886, 0.01172, 0.01697, 0.05769 /
      data (am_ratioNC(99,oi),oi=1,6) / 4.92500, 0.00016, 0.02874, 0.01159, 0.01566, 0.05615 /
      data (am_ratioNC(100,oi),oi=1,6) / 4.97500, 0.00013, 0.02902, 0.01159, 0.01683, 0.05757 /
      data (am_ratioNC(101,oi),oi=1,6) / 5.02500, 0.00012, 0.02817, 0.01176, 0.01654, 0.05659 /
      data (am_ratioNC(102,oi),oi=1,6) / 5.07500, 0.00013, 0.02828, 0.01190, 0.01661, 0.05692 /
      data (am_ratioNC(103,oi),oi=1,6) / 5.12500, 0.00016, 0.02889, 0.01167, 0.01656, 0.05728 /
      data (am_ratioNC(104,oi),oi=1,6) / 5.17500, 0.00015, 0.02862, 0.01266, 0.01625, 0.05768 /
      data (am_ratioNC(105,oi),oi=1,6) / 5.22500, 0.00015, 0.02829, 0.01198, 0.01689, 0.05731 /
      data (am_ratioNC(106,oi),oi=1,6) / 5.27500, 0.00014, 0.02771, 0.01243, 0.01653, 0.05681 /
      data (am_ratioNC(107,oi),oi=1,6) / 5.32500, 0.00014, 0.02810, 0.01201, 0.01575, 0.05600 /
      data (am_ratioNC(108,oi),oi=1,6) / 5.37500, 0.00015, 0.02847, 0.01199, 0.01638, 0.05699 /
      data (am_ratioNC(109,oi),oi=1,6) / 5.42500, 0.00014, 0.02767, 0.01245, 0.01665, 0.05691 /
      data (am_ratioNC(110,oi),oi=1,6) / 5.47500, 0.00016, 0.02789, 0.01256, 0.01648, 0.05709 /
      data (am_ratioNC(111,oi),oi=1,6) / 5.52500, 0.00017, 0.02802, 0.01202, 0.01651, 0.05672 /
      data (am_ratioNC(112,oi),oi=1,6) / 5.57500, 0.00016, 0.02728, 0.01229, 0.01655, 0.05628 /
      data (am_ratioNC(113,oi),oi=1,6) / 5.62500, 0.00015, 0.02796, 0.01269, 0.01648, 0.05728 /
      data (am_ratioNC(114,oi),oi=1,6) / 5.67500, 0.00013, 0.02761, 0.01239, 0.01718, 0.05731 /
      data (am_ratioNC(115,oi),oi=1,6) / 5.72500, 0.00017, 0.02730, 0.01230, 0.01613, 0.05590 /
      data (am_ratioNC(116,oi),oi=1,6) / 5.77500, 0.00015, 0.02740, 0.01199, 0.01672, 0.05626 /
      data (am_ratioNC(117,oi),oi=1,6) / 5.82500, 0.00014, 0.02666, 0.01199, 0.01607, 0.05486 /
      data (am_ratioNC(118,oi),oi=1,6) / 5.87500, 0.00012, 0.02702, 0.01240, 0.01660, 0.05614 /
      data (am_ratioNC(119,oi),oi=1,6) / 5.92500, 0.00012, 0.02694, 0.01306, 0.01669, 0.05681 /
      data (am_ratioNC(120,oi),oi=1,6) / 5.97500, 0.00016, 0.02744, 0.01277, 0.01618, 0.05655 /