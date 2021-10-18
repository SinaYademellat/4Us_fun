
CREATE DATABASE Zendan;


CREATE TABLE Zendani(
    Zendani_id INT NOT NULL AUTO_INCREMENT,
    Zendani_name VARCHAR (40) NOT NULL,
    Zendani_family VARCHAR(40) NOT NULL,
    Zendani_sen VARCHAR(40) NOT NULL,
    Zendani_tarikhe_vorod DATE,
    PRIMARY KEY (Zendani_id)
) AUTO_INCREMENT = 1000;

CREATE TABLE Sellool(
    Sellool_id INT NOT NULL AUTO_INCREMENT,
    Sellool_name VARCHAR (40) NOT NULL,
    Sellool_zarfiat INT NOT NULL,
    PRIMARY KEY (Sellool_id)
);

CREATE TABLE ShomareParvande(
    ShomareParvande_id INT NOT NULL AUTO_INCREMENT,
    ShomareParvande_name VARCHAR (40) NOT NULL,
    PRIMARY KEY (ShomareParvande_id)
);

CREATE TABLE Vakil(
    Vakil_id INT NOT NULL AUTO_INCREMENT,
    Vakil_vekalatID VARCHAR (40) NOT NULL,
    PRIMARY KEY (Vakil_id)
);


INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "رامين",
        "جهانبگلو",
        "24",
        '2014-04-08'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "امير",
        "دلير",
        "29",
        '2002-06-07'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "سعيد",
        "درخشندي",
        "29",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "مجيد",
        "دري",
        "23",
        '2005-09-04'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "آتنا",
        "دائمي",
        "27",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "اميرحسين",
        "هشمت",
        "27",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "روزبه",
        "تهراني",
        "28",
        '2002-05-01'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "رامين",
        "تهراني",
        "49",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "مهدي",
        "حاجتي",
        "29",
        '1999-05-16'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "سهيلا",
        "حجاب",
        "30",
        '2017-05-22'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "عليرضا",
        "رضايي",
        "47",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "سوباسا",
        "آذارو",
        "30",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "داني",
        "ين",
        "34",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "وو",
        "جين",
        "26",
        '2007-09-26'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "يو سيانگ",
        "جو",
        "37",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "كانگ مال",
        "گوم",
        "46",
        '2007-08-16'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "تام",
        "چون",
        "30",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "جكي",
        "چان",
        "35",
        '2007-07-30'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "بروس",
        "لي",
        "35",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "مهران",
        "غفوريان",
        "46",
        '2007-06-11'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "مهران",
        "مديري",
        "123",
        '2007-05-22'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "رامبد",
        "جوان",
        "12",
        NOW()
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "هو سونگ",
        "ته",
        "26",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "لي بيونگ",
        "هون",
        "37",
        '2007-03-03'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "لي بو",
        "مي",
        "37",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "پارك هه",
        "سو",
        "39",
        '2007-02-01'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "وي ها",
        "جون",
        "47",
        '2007-01-26'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "كونگ",
        "يو",
        "19",
        '2027-05-16'
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "لي",
        "جونگ جه",
        "29",
        "2027-05-16"
    );

INSERT INTO
    Zendani (
        Zendani_id,
        Zendani_name,
        Zendani_family,
        Zendani_sen,
        Zendani_tarikhe_vorod
    )
VALUES
    (
        NULL,
        "هوين",
        "جونگ",
        "20",
        '2017-12-12'
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 1",
        4
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 2",
        3
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 3",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 4",
        4
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 5",
        8
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 6",
        6
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 7",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 8",
        3
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 9",
        6
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 10",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 11",
        7
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 12",
        8
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 13",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 14",
        6
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 15",
        8
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 16",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 17",
        6
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 18",
        9
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 19",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 20",
        6
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 21",
        7
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 22",
        3
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 23",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 24",
        3
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 25",
        7
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 26",
        4
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 27",
        3
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 28",
        5
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 29",
        7
    );

INSERT INTO
    Sellool (
        Sellool_id,
        Sellool_name,
        Sellool_zarfiat
    )
VALUES
    (
        NULL,
        "sell 30",
        3
    );


INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_1");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_2");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_3");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_4");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_5");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_6");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_7");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_8");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_9");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_10");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_11");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_12");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_13");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_14");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_15");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_16");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_17");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_18");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_19");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_20");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_21");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_22");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_23");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_24");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_25");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_26");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_27");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_28");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_29");

INSERT INTO
    ShomareParvande(ShomareParvande_id, ShomareParvande_name)
VALUES
    (Null, "Markazi_30");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-123");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-4532");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-5332");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-21456");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-125467");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-1");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-1685246");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-425247323");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-124341");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-124352163");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-72431");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-5432453");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-2352143");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-2358");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-948854");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-8474657");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-54623");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-14563423");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-456123");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-15423");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-12i5463");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-1235343");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-132522233");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-1234576523");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-174263423");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-135223");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-167865623");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-1267458793");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-456123");

INSERT INTO
    vakil(Vakil_id, Vakil_vekalatID)
VALUES
    (NULL, "VK-124533");