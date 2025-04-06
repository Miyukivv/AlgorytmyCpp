﻿# Algorytmy C++ 
### Zadania
  - [Suma](suma.cpp/)
  - [Blenda uranowa](blenda_uranowa.cpp/)
  - [Sejf paradoksu](sejf_paradoksu.cpp/)
  - [Najniższe ceny w obserwowalnym Wszechświecie](najnizsze_ceny_w_obserwowalnym_wszechswiecie.cpp/)
  - [Wehikuł na dotarciu](wehikul_na_dotarciu.cpp/)
  - [Misja Janusza](misja_janusza.cpp/)
  - [Powracający czas](powracajacy_czas.cpp/)
  - [Zaginione miasto](zaginione_miasto.cpp/)
  - [Ogród przypraw](ogrod_przypraw.cpp/)
  - [Ponadczasowe Święta](ponadczasowe_swieta.cpp/)
  - [Wielka Inflacja](wielka_inflacja.cpp/)
  - [Kalendarz prasłowian](kalendarz_praslowian.cpp/)
  - [Zagionione miasto](zaginione_miasto.cpp/)
  - [Zadanie 1](zadanie1.cpp/)
  - [Zadanie 2](zadanie2.cpp/)


# Opis zadań:
### [suma](suma.cpp/)

Dodaj do siebie dwie liczby całkowite.
Wejście:

Na wejściu znajduje się liczba naturalna n, a następnie n par liczb całkowitych.
1 ≤ n ≤ 10
Wyjście:

Na wyjściu dla każdej pary liczb należy wyświetlić wynik ich sumy.
Przykład:
#### Wejście:
4
3 5
2 9
0 10
100 200

#### Wyjście:
8
11
10
300

### [Blenda uranowa](blenda_uranowa.cpp/)

W XXV wieku organizacja podróżników w czasie Kronostat dba o to, by przyszłość ludzkości nie zamieniła się w kompletną katastrofę. A tym razem zagrożenie jest poważne - bez odkrycia radu przez Marię Skłodowską-Curie i jej męża Pierre’a, medycyna przyszłości wyląduje na śmietniku historii. Ale problem jest prostszy, niż by się wydawało - Maria i Pierre po prostu nie zdążą przerzucić ton blendy uranowej, z której mają wyodrębnić rad. Ot, klasyczny problem "za dużo blendy, za mało czasu".

Na ratunek przybywa trio z Kronostatu - Grażyna, Janusz i Stach, najlepsi agenci, jakich można znaleźć w XXV wieku (a przynajmniej najlepsi, którzy akurat mieli czas). Ich misja? Pomóc Marii i Pierre'owi przerzucić tony tej nieszczęsnej blendy, zanim rad zniknie na zawsze w otchłaniach nieodkrytej historii. Wyposażeni w niezastąpione umiejętności organizacyjne, improwizacyjne i dyplomatyczne, nasza trójka podróżników rzuca się do pracy - choć z pewnymi ograniczeniami, bo nie mogą za bardzo zmieniać biegu historii. No i nie mogą używać technologii z przyszłości. Więc tak, o laserach i robotach mogą zapomnieć - zostają z łopatami i wiadrami.

Janusz, jak to Janusz, próbował najpierw sklecić coś z taśmy klejącej i paru patyków, ale Grażyna szybko sprowadziła go na ziemię: "Nie ma cudów, Janusz, będziemy musieli kopać." Stach za to już zdołał przekonać paru XIX-wiecznych chłopów do pomocy, ale pojawił się nowy problem: ludzie zaczynają się męczyć. Z każdym dniem ich wydajność spada - pierwszego dnia przerzucają C ton blendy, ale każdego kolejnego dnia o K ton mniej. Pracownik, który stracił całą swoją wydajność, wraca zmęczony do domu. A przecież czas ucieka!

Podróżnicy z Kronostatu zadają sobie teraz tylko jedno pytanie: czy zdążą przerzucić blendę, zanim historia się posypie? Jeśli im się nie uda, będą musieli zastosować Efekt Janusza (czyli ostateczne, desperackie rozwiązanie polegające na zasadzie "Janusz coś wymyśli", nawet jeśli oznacza to kompletne prowizorki, które ledwo się trzymają kupy).
Wejście:

Na wejściu znajdują się liczba dodania t, oznaczająca liczbę danych testowych. Każdy zestaw składa się z trzech liczb naturalnych: n, d oraz m, oznaczających kolejno liczbę chłopów do pomocy, liczbę zapytań o dni i wymaganą liczbę ton blendy. Następnie otrzymuje się n linii, gdzie każda linia zawiera dwie liczby całkowite: wydajność C i redukcję wydajności K kolejnych chłopów. Ostatnia linia zestawu testowego to d liczb dodatnich, oznaczających liczbę dni.
1 ≤ t ≤ 10
1 ≤ n ≤ 1000
1 ≤ d ≤ 1000000
1 ≤ m ≤ 10000000
1 ≤ K ≤ C ≤ 10000

Wyjście:
Na wyjściu przy każdym zestawie testowym należy dla każdej spośród d liczb wyświetlić informację o liczbie ton blendy przerzuconych do d_i dnia oraz w drugiej linii liczbę zapytań, dla których udało się przerzucić wymaganą liczbę ton blendy.
Przykład:

#### Wejście:
2
2 3 100
20 10
30 5 
5 1 100
1 2 15
5 2
1 3

#### Wyjście:
130 50 135 
2
5 9 
0

### [Sejf paradoksu](sejf_paradoksu.cpp/)

Jedną z misji Kronostatu jest pilnowanie, aby podróże w czasie nie wpłynęły na główną linię czasu. W tym celu agenci organizacji muszą często naprawiać błędy innych podróżników, którzy pozostawiają za sobą nielegalne artefakty w różnych epokach.

Grażyna — znana z tego, że potrafi zorganizować misję czasową co do sekundy, z uwzględnieniem każdej możliwej zmiennej — niedawno zakończyła długą misję zbierania przedmiotów, które nie powinny znaleźć się w przeszłości. Ostatecznym krokiem jej operacji jest zdeponowanie tych artefaktów w Sejfie Paradoksu, potężnym urządzeniu manipulującym przestrzenią, stworzonym w XXV wieku. Sejf Paradoksu to urządzenie o zadziwiających właściwościach: bez względu na to, ile przedmiotów już się w nim znajduje, zawsze można dołożyć więcej. Jednak nie jest to takie proste — każde dołożenie wymaga energii. Im więcej przedmiotów znajduje się już w sejfie, tym więcej energii potrzeba, aby „skompresować” zawartość i przechować nowy artefakt.

Nasza agentka, znana ze swojej obsesyjnej precyzji, chce zaplanować wkładanie przedmiotów do Sejfu Paradoksu w taki sposób, aby zużyć jak najmniej energii. Za każdym razem, gdy już ułoży kolejność, szybko znajduje lepsze rozwiązanie. To nieustanne dążenie do perfekcji sprawia, że traci zbyt wiele czasu na zastanawianie się.

Grażyna zebrała listę identyfikatorów artefaktów oraz ich masy. Sejf Paradoksu działa w taki sposób, że koszt energetyczny dodania przedmiotu o masie x kg do sejfu, w którym znajduje się już y kg przedmiotów, wynosi dokładnie x + y kJ. Janusz próbował coś wymyślić, ale chociaż jego pomysłowość nie zna granic, to jak zwykle było to tylko prowizoryczne rozwiązanie. Oznacza to, że część przedmiotów może być już prawidłowo uporządkowana.

Twoim zadaniem jest zaplanowanie kolejności wkładania przedmiotów do Sejfu Paradoksu tak, aby zużyć jak najmniej energii. Jeśli istnieje kilka przedmiotów o takiej samej masie, należy je wkładać w kolejności, w jakiej występują na liście.

#### Wejście
W pierwszej linii wejścia znajduje się liczba naturalna t, czyli liczba zestawów danych. Każdy zestaw rozpoczyna się liczbą naturalną n, która określa liczbę artefaktów w danym zestawie. Następnie w kolejnych n liniach znajdują się opisy artefaktów. Każdy opis składa się z identyfikatora artefaktu (jednowyrazowy ciąg znaków) oraz liczby naturalnej m, oznaczającej masę przedmiotu w kilogramach.

1 ≤ t ≤ 10
1 ≤ n ≤ 50 000
1 ≤ m ≤ 100 000

#### Wyjście
Na wyjściu dla każdego zestawu danych należy wypisać dwie informacje: minimalną łączną ilość energii potrzebną do włożenia wszystkich artefaktów do Sejfu Paradoksu, a w kolejnej linii — listę identyfikatorów artefaktów w takiej kolejności, w jakiej należy je wkładać, aby zużyć jak najmniej energii.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisany algorytm sortujący.

Przykład:
#### Wejście:
2
5
rower_elektryczny-1453 12
smartfon-1890 1
dron_z_kamera-2000pne 4
przenosna_lodowka-753 8
teleporter_do_kawy-2024 4
3
skaner_mysli-1984 7
teletransporter-3210pne 133
noktowizor-1410 1

#### Wyjście:
61
smartfon-1890 dron_z_kamera-2000pne teleporter_do_kawy-2024 przenosna_lodowka-753 rower_elektryczny-1453
150
noktowizor-1410 skaner_mysli-1984 teletransporter-3210pne 

### [Najniższe ceny w obserwowalnym Wszechświecie](najnizsze_ceny_w_obserwowalnym_wszechswiecie.cpp/)
 Dzięki drobiazgowemu planowaniu Grażyny Sejf Paradoksu zużył o połowę mniej energii niż w ubiegłym miesiącu, gdy za deponowanie przedmiotów brał się Janusz. Przez to udało się uniknąć wysokich rachunków za energię od PGE (Ponadgalaktyczna Grupa Energetyczna).

Nasza załoga nie mogła jednak długo cieszyć się z zaoszczędzonych środków. Janusz wymieniając uszczelkę pod głowicą silnika w wehikule czasu uszkodził chłodnicę wypełnioną ciekłym azotem (zgodnie z prawem Murphy'ego "Jeśli coś może pójść nie tak, to pójdzie nie tak"). Zamiast spędzić miło czas, oglądając swój ulubiony sport- prasowanie ekstremalne, musiał on wybrać się do jednego z pobliskich sklepów sieci "Reptylianka". W sklepie tym można dostać praktycznie wszystko: od polędwiczek z czerwi pustynnych, aż po części wymienne do wehikułów z silnikiem diesla. Jedyną wadą tego dyskontu są kolejki, których długość liczy się w latach świetlnych. Wszystko przez to, że właściciel sklepu zatrudnił w zeszłym miesiącu do pracy na kasie szarych kosmitów, którzy mając tylko trzy palce nie są w stanie skanować tylu produktów, co mające po kilkanaście par odnóży insektoidy z konkurencyjnych sieci. Widząc skalę problemu Janusz udał się do managera sklepu i zaproponował, że za odpowiednio dużą zniżkę przy zakupach pomoże mu skrócić czas oczekiwania klientów poprzez opracowanie systemu do automatycznego zarządzania kolejkami.

Zadaniem programu będzie kierowanie klientów do najmniej obleganych kas. Program ma symulować pracę sklepu przez określony czas liczony w sekundach oraz wyświetlać stan każdej kasy (ilość osób w kolejce oraz szacowany czas oczekiwania w kolejce) po upływie tego czasu.

Te same kasy mogą w trakcie trwania symulacji być otwierane i zamykane kilkukrotnie. W przypadku otwarcia kasy czas oczekiwania i ilość osób w kolejce wynosi 0. Kasy, w których czas oczekiwania w kolejce (nie liczba osób - ponieważ może być tak, że jedna osoba zrobiła zakupy na cały rok i czas obsłużenia takiej osoby jest wyższy niż 10 standardowych klientów) jest najkrótszy powinny być przez system wychwytywane, a nowe osoby powinny być do takich kas kierowane. Nie rozpatrujemy sytuacji znanych z supermarketów, gdzie informacja o kasie, która będzie otwarta niebawem, podawana jest przez megafon i klienci mogą tworzyć kolejki do jeszcze nie otwartej kasy. Dodatkowo zakładamy, iż sekwencyjne zamykanie i otwieranie tej samej kasy w sklepie nie występuje. W naszym programie, gdy kasa ma zostać zamknięta kasjer obsługuje tylko pierwszą osobę z kolejki (dla uproszczenia przyjmujemy, że taka osoba zostaje obsłużona natychmiastowo, wszakże kosmici mają możliwość zaginania czasoprzestrzeni). Pozostałe osoby, zaczynając od drugiej osoby, należy pokierować do pozostałych kas w ten sam sposób jak opisano to dla nowych klientów.

Zakładamy, że w sklepie musi w każdym momencie istnieć co najmniej jedna otwarta kasa. W przypadku, gdy dwie kasy mają jednakowy czas oczekiwania - system wybiera kasę o mniejszym numerze (id).

Wejście
W pierwszej linii wejścia znajdują się cztery liczby naturalne: t - czas pracy sklepu podlegający symulacji liczony w sekundach; l - ilość kas w sklepie; s - sprawność kas, czyli liczba sekund potrzebna na zeskanowanie produktu przez kasjera; z - czas, jaki potrzebuje klient na dokonanie płatności. W kolejnych liniach pojawiać będą się liczby/symbole opisujące zdarzenia, których wyróżniamy 3 rodzaje: o - otwarcie kasy, z - zamknięcie kasy, k - pojawienie się nowego klienta oczekującego na obsługę. Każda linia zaczyna się od jednoznakowej flagi: f - oznaczającej rodzaj zdarzenia (o,z,k - jak opisano wcześniej). W przypadku, gdy f == 'k' kolejne dwa parametry to: p - względny czas w sekundach liczony od rozpoczęcia symulacji w przypadku pierwszego klienta, a dla pozostałych klientów- czas od pojawienia się poprzedniego klienta (jest gwarancja, że suma wszystkich względnych czasów w danych wejściowych pi będzie większa lub równa t ) ; r - liczba produktów w koszyku klienta. Gdy f == 'o' lub f == 'z' kolejnym parametrem znajdującym się za flagą jest a - numer kasy.

1 ≤ t ≤ 30 000
1 ≤ l ≤ 30
1 ≤ s ≤ 60
1 ≤ z ≤ 360
0 ≤ p ≤ 10 000
f ∈ ('o','z','k')
0 ≤ a ≤ l - 1
1 ≤ r ≤ 100

Wyjście
Na wyjściu powinniśmy otrzymać stan każdej kasy po upływie czasu t zapisany w postaci:
K[numer_kasy]: [ilosc_osob_w_kolejce]o, [dlugosc_kolejki_w_sekundach]s - jeżeli kasa jest otwarta lub
K[numer_kasy]: z - gdy kasa jest zamknięta.

Informacje o kasach powinny być wyświetlone w jednej linii i powinny być oddzielone przecinkami.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisaną implementację kolejki.
Przykład:

#### Wejście:
30 5 5 5			
o 2				
o 1				
k 0 8			
k 1 7			
k 1 10		
k 0 5			
k 0 4			
o 4				
k 10 8		
k 0 5			
k 10 6		
z 1				
k 7 7			
k 0 5	
k 8 4
	

#### Wyjście:
K0: z, K1: z, K2: 4o 136s, K3: z, K4: 5o 147s
	
## [Wehikuł na dotarciu](wehikul_na_dotarciu.cpp/)

 Po długich godzinach spędzonych w Reptyliance Januszowi udało się rozwiązać problem nieziemskich kolejek. Za swoją pomysłowość dostał on solidny rabat, dzięki któremu mógł kupić wszystkie niezbędne części do wehikułu czasu. Kosmicznego grosza wystarczyło nawet na zakup kebsa "Mc. Woovitch", z sosem ostrym jak woń atmosfery Urana, dla Stacha i Grażyny.

Uraczeni smakiem wytwornego dania członkowie Kronostatu przystąpili do naprawy wehikułu. Naprawa (wbrew prawu Murphiego) poszła bez najmniejszych problemów i w czasie krótszym niż dzień na Jowiszu nasza załoga mogła wykonać, pierwszą od dłuższego czasu, podróż w czasie. Żądni przygód załoganci postanowili wyruszyć w przyszłość by odreagować napiętą atmosferę panującą po ostatnich wydarzeniach. Grażyna zaproponowała rok 5129, w którym można było zaszaleć, gdyż swoją trasę koncertową po Drodze Mlecznej miał wtedy największy gwiazdor we Wszechświecie "73N3K MARS TYTANIUK". Stach wprowadził w terminalu wspomnianą datę i kliknął ENTER, po czym 3...2...1... nasza grupa znalazła się w roku 1295... (prawo Murphiego jednak działa). Winowajcą całego zdarzenia był, jak się można łatwo domyśleć, ostry sos, który beztrosko kapał z kebaba Janusza wprost na Panel Sterowania. Janusz, jak to Janusz, kazał pozostałym załogantom nie panikować - przecież wkrótce coś wymyśli. Po kilku godzinach spędzonych w błocie za chłopską chatą, w której stał wehikuł, Janusz wpadł na pomysł.

Pomysł Janusza był prosty, a zarazem genialny: wehikuł musi "rozchodzić" tego kebaba - a nie ma lepszej metody na rozchodzenie ostrego sosu przez silink diesla, niż jego dotarcie. Posiłkując się Czasoprzestrzennym Internetem Janusz wreszcie znalazł odpowiednią metodę pomiaru poziomu dotarcia silnika. Na forum motoryzacyjnym mirkowo.com odczytał, że należy zbadać dźwięki wydawane przez silnik, a dokładniej ich częstotliwość oraz długość fali. Te dwie wielkości łaczy relacja v = lf, gdzie v to prędkość dźwięku, l długość fali, natomiast f częstotliwość. Na forum tym znalazł on również cenne wskazówki.

Po pierwsze: dźwięki należy mierzyć na słuch, ponieważ te badziewne mierniki z Zeta Reticuli, które zalały rynek w calutkiej Drodze Mlecznej mierzą częstotliwość w zakresie od 500 do 5000 Hz, podczas gdy ludzkie ucho wychwytuje dźwięki z zakresu od 20 do 20 000 Hz!

Po drugie: silniki wehikułów działają tylko wtedy, gdy temperatura na zewnątrz wynosi od -30 do 30 stopni Celsjusza, dlatego pomiaru dźwięku należy dokonywać zarówno w lato, jak i zimę, gdyż prędkość dźwięku jest zależna od temperatury: 

![obraz](https://github.com/user-attachments/assets/d2a88dcd-352e-4275-9237-1af82013bdc7)

 Po trzecie: gdy wszystkie prawidłowo zanotowane częstotliwości, bez względu na aurę, będą oscylować w granicach (300 +/- 25)Hz silnik można uznać za dotarty (musi istnieć co najmniej jeden prawidłowy odczyt z tego zakresu). Jeżeli zostanie odnotowany choćby jeden prawidłowo zanotowany dźwięk spoza tej skali, to silnik uznajemy za niedotarty.

Po czwarte: jeżeli silnik jest dotarty, to można wyruszyć bez problemu na koncert gwiazdora!!!

W celu dotarcia silnika załoga Kronostatu udawała się w losowe punkty na osi czasu, tak by dokonać pomiarów w różnych warunkach temperaturowych. W dawnych latach zimy były porządne, natomiast w przyszłości, przez ekstremalne ocieplenie klimatu, upał panuje cały rok. Mierzone metodą na "słuch Janusza" parametry pracy silika Stach zapisywał w notesie pokładowym. Na podstawie danych o długości fal dźwiękowych i częstotliwościach zasłyszanych w różnych miejscach w czasie nasz spec od wszystkiego oceni, czy wehikuł działa już prawidłowo.

Grażyna, patrząc z poirytowaniem na notaki, jakie robi Stach, złapała się za głowę, gdyż nie było w nich żadnego porządku. W celu uratowania misji sama chwyciła za notes i zaprowadziła porządek w zapiskach. Uporządkowała one dane z "Januszometru" poprzez zapisanie odwiedzanych lat w postaci drzewa binarnego. Dla danego roku zasłyszane częstotliwości i odpowiadające im długości fali Grażyna zapisała w analogiczny sposób.

Napisz program, który ułatwi pracę Grażyny.

Wejście
W pierwszej linii wejścia znajduje się liczba naturalna n - ilość podróży w czasie. Następnie ze standardowego wejścia pobrane zostanie n linii , składających się z trzech liczb naturalnych: y - rok, do którego przybyła załoga oraz f - zasłyszana częstotliwość w Hz oraz l - zmierzona długość fali w cm.

1 ≤ n ≤ 300 000
1 ≤ y ≤ 10 000
1 ≤ f ≤ 100 000
1 ≤ l ≤ 5 000

Wyjście
Na wyjściu powinniśmy otrzymać tyle linii, ile unikatowych dat pojawiło się w danych wejściowych, dla których dokonano prawidłowych pomiarów. Daty te powinny zostać posortowane rosnąco. Każda linia powinna zawierać zasłyszane w danym roku częstotliwości i długości fal:
[rok]: (f1,l1), (f2,l2), (f3,l3)...
Posortuj pary (fi,li) w porządku rosnącej częstotliwości. Jeżeli znajdą się dwie pary o jednakowej częstotliwości, to jako pierwszą wyświetl tę parę, która ma mniejszą długość fali.
W ostatniej linii wyjścia umieść dodatkową informację o tym czy silnik został dotarty TAK/NIE. Biorąc pod uwagę, że słuch Janusza po zjedzeniu ostrej pity, potrafi czasem szwankować, a zmęczona Grażyna sporadycznie popełnia błędy w notatkach (np. zapisze przy częstotliwości o jedno zero więcej niż trzeba) odrzuć wszystkie pomiary, które uznasz za błędne. Zastanów się jakich dźwięków Janusz nie mógł usłyszeć i jakie dźwięki nie mogły zostać zanotowane uwzględniając temperaturę.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisaną implementację drzewa binarnego.
Przykład:

#### Wejście:
16
5029 10 2789
7819 45043 23
1993 30 1080
2789 29 1090
2222 302 107
834 299 108
67 34 100
123 390 12888
728 300 108
1073 302 107
2222 302 107
834 109 300
1993 300 108
234 3000 11
2222 150 214
834 299 109
	

#### Wyjście:
234: (3000,11)
728: (300,108)
834: (109,300) (299,108) (299,109)
1073: (302,107)
1993: (30,1080) (300,108)
2222: (150,214) (302,107) (302,107)
2789: (29,1090)
NIE
	

    
