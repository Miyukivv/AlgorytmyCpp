# Algorytmy C++ 
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
  - [Ogródki działkowe](ogrodki_dzialkowe.cpp/)
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

### [Misja Janusza](misja_janusza.cpp/)

Janusz znowu coś sknocił. Po powrocie z interwencji podczas koronacji Bolesława Chrobrego linia czasu przestała być stabilna – Janusz zamiast subtelnie naprawić drobne zakłócenie, przypadkiem zainspirował Chrobrego do wynalezienia elektryczności na wieki przed Edisonem! Efekt? W 1025 roku rycerze walczą mieczami świetlnymi, a Mieszko II twierdzi, że widział UFO.

Stach, wieczny teoretyk czasowy, zaraz zaproponował genialne rozwiązanie: „Janusz, może spróbuj wrócić do tego momentu i zamiast wyrywać się z takimi pomysłami, tylko pomachaj flagą Chrobrego! Kto wie, może to wystarczy?” Grażyna, szefowa misji, kiwała głową, mrużąc oczy. „Janusz, decyzja należy do ciebie, ale pamiętaj – jeśli znowu coś sknocisz, wracasz na miesiąc do epoki lodowcowej, z dietą złożoną wyłącznie z rozmrożonej wody mamutów. Podobno niezbyt orzeźwiająca.”

Janusz musi przebrnąć przez serię decyzji, by na powrót ustabilizować linię czasu. W tej trudnej misji pomoże mu nieco przestarzały, ale wciąż funkcjonalny system MOWKiCz (Monitor Ostatecznego Wyrównania Krawędzi Czasu), który wrzuca Janusza w wybrany stabilny punkt czasu i wskazuje decyzje prowadzące do innych punktów. Janusz musi przemieszczać się między punktami w linii czasu i w każdym z nich podjąć decyzję, która prowadzi do następnego punktu. Każde przejście między punktami zmienia status docelowego punktu na przeciwny do statusu punktu, z którego Janusz przybył – stabilny zmienia się w niestabilny i odwrotnie. Celem jest osiągnięcie sytuacji, w której ostatni punkt w czasie – ten, z którego nie ma już przejścia dalej – zachowuje stabilność.

MOWKiCz nie jest idealny i bywa, że stabilizacja nie jest możliwa. W takim przypadku Janusz może spróbować wybrać mniejsze zło: ugrzęznąć w pętli czasowej, to znaczy będzie krążyć między punktami bez końca, zmieniając ich status. Grażyna nazywa to pętlą. Gorsza opcja to sytuacja, w której system nie daje już żadnych szans na stabilizację, co oznacza nieuniknioną katastrofę temporalną.

Czy Janusz może doprowadzić do stabilizacji systemu? Czasem sukces wydaje się niemożliwy, ale system pozwala na balansowanie na krawędzi chaosu. Jeśli jednak nie ma żadnej szansy na stabilność, pozostaje Januszowi czekać na najgorsze - tyradę Grażyny.

Wejście:
Na wejściu program otrzymuje liczbę naturalną t, oznaczającą liczbę testów. Następnie podanych jest t zestawów danych. Każdy zestaw składa się z trzech liczb naturalnych n, m oraz s oznaczających liczbę punktów, liczbę połączeń pomiędzy nimi i numer punktu, z którego rozpoczyna się naprawianie linii czasu.
W kolejnych m liniach występują pary liczb naturalnych x i y – które informują, że decyzja w punkcie czasu nr x prowadzi do punktu nr y. Należy przyjąć, że nie pojawią się wielokrotnie te same połączenia ani pętle (czyli połączenia które zaczynają się i kończą w tym samym punkcie).
Punkty numerowane są od 0.
1 ≤ t ≤ 10
1 ≤ n ≤ 100000
0 ≤ m ≤ 2*n
0 ≤ x,y < n
Wyjście:

Na wyjściu dla każdego testu program ma wypisać informację NIE, jeżeli nie ma możliwości, by Janusz doprowadził do stabilizacji, PETLA, jeżeli nie da się uzyskać stabilizacji, ale można doprowadzić do pętli lub TAK, jeżeli Janusz może doprowadzić do stabilizacji. W przypadku sukcesu należy w drugiej linii wyjścia dla danego testu wypisać numery punktów, które kolejno należy odwiedzić. Należy podać najkrótsze rozwiązanie. W przypadku ścieżek równej długości należy wybrać pierwszą leksykograficznie.

Przykład:

#### Wejście:
3
6 7 3
0 1
1 5
2 0
2 1
3 2
3 4
4 0
4 3 0
0 1
1 2
2 3
2 2 0
0 1
1 0

#### Wyjście:
TAK
3 2 0 1 5
NIE
PETLA

### [Powracający czas](powracajacy_czas.cpp/)

 Co by się stało, gdyby podróżnik w czasie cofnął się do przeszłości i powstrzymał (umyślnie lub przez przypadek) spotkanie swoich rodziców? Spowodowałoby to, że nigdy by się nie spotkali, a podróżnik nigdy by się nie urodził. Skoro jednak nie istniałby, nie mógłby cofnąć się w czasie, by powstrzymać spotkanie swoich rodziców – co z kolei oznacza, że w końcu by się urodził...

Problem ten, bardziej znany jako Paradoks Dziadka, jest jednym z klasycznych paradoksów związanych z podróżami w czasie. W takim przypadku dochodzi do zapętlenia czasu, w wyniku którego tworzy się cykl powiązanych wydarzeń. Formalnie rzecz biorąc, mamy zamknięty ciąg zdarzeń o długości N: e1 < e2 < ... < eN, gdzie wydarzenie eN jest powiązane z wydarzeniem e1. Wartości ei są liczbami całkowitymi, oznaczającymi znacznik czasowy wydarzenia.

Grażyna, Janusz i Stach nie mieli tym razem szczęścia – trafili do pewnego punktu takiego cyklu czasowego. Nie wiedzą, w którym punkcie cyklu się znajdują ani ile wydarzeń zawiera cykl, w którym utknęli. Wehikuł czasu, zgodnie z protokołem kryzysowym, natychmiast przeszedł w tryb przywracania i dla bezpieczeństwa pozwala jedynie podróżować w przód po kolejnych wydarzeniach w tym cyklu. Zgodnie z procedurą, pierwszym krokiem w takiej sytuacji powinno być zbadanie długości cyklu. Sytuacja na pokładzie zaczęła jednak robić się napięta. Grażyna nalega, by postępować zgodnie z protokołem, a Janusz twierdzi, że znalezienie rozwiązania zajmie wieki, więc zaraz wymyśli jakieś lepsze wyjście. Wtedy do akcji wkroczył Stach, który obiecał, że znajdzie szybkie rozwiązanie, pozwalające ustalić długość cyklu. Pomóż mu w tym zadaniu.

Wehikuł czasu w trybie przywracania udostępnia tylko jedną operację:

int time_jump(unsigned int t);

Operacja ta, dla zadanego kroku t, pozwala przeskoczyć do wydarzenia oddalonego od aktualnego wydarzenia ei o t wydarzeń, tj. do wydarzenia ei+t (uwzględniając zapętlenie czasu). Zwraca ona znacznik czasowy tego nowego wydarzenia (wartość ei+t). Wykonanie operacji time_jump(0) spowoduje zwrócenie znacznika czasowego aktualnego wydarzenia (wartość ei).

Wejście
Na wejściu program otrzymuje liczbę naturalną T oznaczającą liczbę zestawów danych. Dla każdego testu zdefiniowane są funkcje:

int time_jump(unsigned int t);
void next_test();

Funkcja next_test() pozwala załadować kolejny* zestaw danych (cykl, dla którego należy znaleźć jego długość).
*Wywołanie tej funkcji po ostatnim zestawie danych nie zakończy się błędem (załadowany zostanie pierwszy cykl).
1 ≤ T ≤ 100 000
1 ≤ N ≤ 10 9
-10 9 ≤ ei ≤ 10 9 dla każdego 1 ≤ i ≤ N

Wyjście
Na wyjściu program powinien wypisać T liczb, z których każda reprezentuje długość cyklu dla odpowiedniego zestawu danych. Liczby powinny być oddzielone spacjami.
Przykład
#### Wejście
2

Ukryte cykle
cykl 1: {-1300, -893, -86, 4, 6, 79, 102, 745, 1945, 2345}
cykl 2: {-101, -100, 17, 1900, 2400}    

![obraz](https://github.com/user-attachments/assets/aa9c3dc1-b27a-41b0-b927-8fcf6105fb9a)

#### Wyjście
10 5 

Uwagi techniczne
W rozwiązaniu nie należy dodawać żadnej dyrektywy preprocesora dołączającej plik nagłówkowy z udostępnionymi funkcjami. Rozwiązanie nie powinno również zawierać definicji tych funkcji w swojej treści. Przykładowy program (niepoprawne rozwiązanie) wykorzystujący udostępnione funkcje:

#include <iostream>

int main(){
    int n;
    std::cin>>n;
    while(n--){
        int begin = time_jump(0); 
        for(int i=0; i<=n; i++){
            int time_stmp = time_jump(5);
        }
        std::cout<<(n+1)*5<<' ';
        next_test();
    }
    return 0;
}

Uwaga! Program należy napisać wykorzystując metodę dziel i zwyciężaj.

### [Ogród przypraw](ogrod_przypraw.cpp/)

Janusz, Stach i Grażyna zostali wysłani do roku 1574, kiedy to odbywała się wielka uczta powitalna Henryka Walezego. Według danych Kronostatu podczas uczty doszło do kulinarnej katastrofy - królewski pałacowy ogród przypraw został źle zaplanowany, co spowodowało, że niektóre przyprawy rosły w trudno dostępnych miejscach, a zbiór był niezwykle kosztowny. Jednak według historycznych zapisów taka katastrofa nigdy nie miała miejsca. Kronostat zidentyfikował poważną anomalię czasową, która zakłóciła oryginalny projekt ogrodu, zmieniając jego układ w skomplikowany, chaotyczny labirynt przypraw. Podróżnicy dostali zatem zadanie przeprojektowania ogrodu tak, aby koszt zbioru przypraw do królewskich potraw był jak najmniejszy.

Ogród przypraw jest podzielony na grządki ułożone w kwadratowej siatce z wytyczonymi ścieżkami pomiędzy nimi. Grządki są ponumerowane wzdłuż ścieżek poziomych (wierszy) i pionowych (kolumn) od 0 do n-1.

W każdej ścieżce poziomej (wierszu) i pionowej (kolumnie) można przypisać przyprawę tylko do jednej grządki. Oznacza to, że w danym wierszu może być wybrana dokładnie jedna grządka oraz w danej kolumnie również dokładnie jedna grządka. Jest tak, bo według obliczeń królewskiego astrologa, mistrza Horacjusza Ziółkowskiego przyprawy z jednej ścieżki nie mogą rosnąć na więcej niż jednej grządce. Inaczej grozi to zakwaszeniem atmosfery, nadmiarem mocy bazylii i samozapłonem oregano. Każda grządka ma przypisany koszt zbioru przypraw. Podczas przydziału grządek trzeba tylko pamiętać, że plan nasadzeń musiał być zgodny z królewskim dekretem, który nakazuje zaczynać sadzenie od najniższych numerów ścieżek tam, gdzie jest to możliwe.
Wejście

Na wejściu program otrzyma liczbę dodatnią 1<=n<=35, oznaczającą liczbę ścieżek i grządek w ogrodzie. W kolejnych n wierszach znajdzie się ciąg n liczb naturalnych, oznaczających koszt zbioru przyprawy z danej grządki. Koszt na poszczególnych grządkach nie przekracza 1000.
Wyjście

Na wyjściu program musi wypisać n liczb, gdzie każda z nich oznacza numer ścieżki, wzdłuż której należy posadzić przyprawę na danej grządce. Ścieżki i grządki są numerowane od 0.

UWAGA! W zadaniu nie można używać bibliotek STL. Zadanie należy zaimplementować wykorzystując metodę przeszukiwania z nawrotami.
Przykład
#### Wejście:
4
5 3 2 2
1 2 3 3
2 1 8 7
3 5 3 2

#### Wyjście:
1 2 0 3

### [Ponadczasowe Święta](ponadczasowe_swieta.cpp/)

Zbliżają się Święta, a to oznacza, że Święty Mikołaj ma pełne ręce pracy. Choć wiele osób wyjaśnia jego zdolność dostarczania prezentów do milionów domów w jedną noc za pomocą magii, prawda jest znacznie prostsza i bardziej logiczna. Święty Mikołaj to po prostu podróżnik w czasie!

W tym roku nie obyło się bez problemów. W Fabryce Świętego Mikołaja doszło do opóźnień z powodu chaosu w dokumentacji. Okazało się, że kolorowe łańcuchy świąteczne, które miały posłużyć do dekoracji ogrodzenia wokół fabryki, są zbyt krótkie, co spowodowało zakłócenia w pracy elfów. (W linii czasowej Świętego Mikołaja elfy to nie tylko legenda). Końce łańcucha muszą być zaczepione o odpowiednio lewy i prawy słupek przęsła. Łańcuch można skrócić, ale nie da się go wydłużyć. Aby zminimalizować koszty, fabryka planuje zamówić wszystkie łańcuchy w jednym rozmiarze – wystarczająco długim, by pasowały do każdego przęsła ogrodzenia, lecz nie nadmiernie długim, co mogłoby zwiększyć obciążenie elfów.

Ogrodzenie fabryki składa się z n słupków rozmieszczonych w nieregularnych odległościach (słupki te są jednak w miarę równomiernie rozłożone w pewnym zakresie). Oznacza to, że przęsła mogą mieć różne długości. W dokumentacji zapisano pozycje wszystkich słupków, lecz są one podane w losowej kolejności. Elfy nie mogą sobie pozwolić na błędy, dlatego poprosiły o pomoc Kronostatu. Zadaniem Grażyny, Janusza i Stacha jest przejrzenie dokumentacji i ustalenie długości najdłuższego przęsła ogrodzenia. Dzięki temu Fabryka Świętego Mikołaja będzie mogła zamówić łańcuchy o odpowiedniej długości.
Wejście

W pierwszej linii wejścia znajduje się liczba naturalna n (2 ≤ n ≤ 2 000 000) oznaczająca liczbę słupków ogrodzenia. W kolejnej linii znajduje się n liczb rzeczywistych -10 9 ≤ pi ≤ 10 9 — pozycje słupków ogrodzenia w losowej kolejności.
Wyjście

Na wyjściu należy wypisać jedną liczbę rzeczywistą — długość najdłuższego przęsła z dokładnością do 4 miejsc po przecinku.
Przykład
#### Wejście
8
7.6 -2.0 12.0 0.3 9.3 2.0 4.5 5.1

#### Wyjscie
2.7000

Uwaga! Rozwiązanie ma opierać się na algorytmie sortowania w czasie liniowym. Nie można używać STL.

### [Wielka Inflacja](wielka_inflacja.cpp/)

Kolejną misją Grażyny, Janusza i Stacha jest złagodzenie skutków hiperinflacji, która dotknęła Polskę na przełomie lat 80. i 90. XX wieku.

W tamtym okresie cała gospodarka chwiała się w posadach. Szczególnie ciężko mieli przedsiębiorcy (nazywani wówczas prywaciarzami). Załoga Kronostatu musiała więc na chwilę odstąpić od prostowania linii czasu i zająć się księgowością – oczywiście w jej kreatywnej wersji.

Janusz i Stach mają za zadanie odnaleźć przedsiębiorców w tarapatach, co nie jest szczególnie trudnym wyzwaniem. Grażyna, jako mózg operacji i główna księgowa zespołu, musi zebrać od przedsiębiorców wykazy sprzedanych towarów i spróbować przyporządkować poszczególne produkty do najbardziej korzystnych kategorii podatkowych. Dzięki temu przedsiębiorcy zapłacą niższe podatki, co pomoże im uratować swoje biznesy.

Przykładowa tabela Pana Jasia, handlarza wihajstrami: 
![obraz](https://github.com/user-attachments/assets/3e93ef25-066e-4966-9d48-bb9624f2934a)

Grażyna doszła do wniosku, że odrobina kreatywności w tym przypadku nie zaszkodzi. Uważa ona, że najdroższy produkt, wyceniony na 5000 zł, nie powinien być w całości opodatkowany, ponieważ jego cena wynika z wartości wielu części składowych, a nie za wszystkie z nich należy naliczać podatek. Zdecydowała, że kwotę 4000 zł, która podlega opodatkowaniu, należy obciążyć najniższą stawką podatkową wynoszącą 5%. Z kolei "dla równowagi" najtańszy produkt powinien zostać opodatkowany najwyższą stawką – 30%. Grażyna jest przekonana, że Urząd Skarbowy nie powinien mieć zastrzeżeń. A jeśli jednak pojawią się wątpliwości, ma nietypowe rozwiązanie: należy wysłać urzędników na miesiąc do średniowiecza, co jej zdaniem skutecznie rozwiąże problem.

Pamiętaj, że jeżeli dana lista zawiera M produktów, to zawiera również M stawek podatkowych. Stawki te nie muszą być unikatowe. W obliczeniach Grażyna musi wykorzystać wszystkie M wartości.

Napisz program, który obliczy najniższą wartość podatku jaką mogą zapłacić przedsiębiorcy
Wejście

W pierwszej linii wejścia znajduje się liczba naturalna n - ilość przedsiębiorców, którym trzeba pomóc.
Następnie n-razy należy pobrać ze standardowego wejścia:
o - ilość operacji do wykonania dla danego przedsiębiorcy.
Kolejno pobieramy o linii w formacie:
a p t - dodaj produkt w cenie p zł, obłożony podatkiem t%
lub p x - zmień cenę najdroższego produktu o x (jeśli ta operacja nie jest możliwa - nie rób nic).

1 ≤ n ≤ 30 000
1 ≤ o ≤ 100 000
1 ≤ p ≤ 100 000
1 ≤ t ≤ 100
-99 999 ≤ x ≤ 99 999

Wyjście
Na wyjściu powinniśmy otrzymać n linii z wyliczonym najniższym podatkiem dla każdego przedsiębiorcy wyrażony w groszach.
Przykład:
#### Wejście:
2
10
a 1000 20
a 1200 10
a 900  5
a 1500 30
p 100
a 3000 40
p -200
p -100
a 20 20
a 30 4
8
a 970 20
a 1800 10
a 1900  5
a 150 30
a 2000 40
p -200
a 50 10
a 9000 4
	
#### Wyjście:
70500
107400

UWAGA! Zadanie należy rozwiązać samodzielnie implementując kopiec!

### [Kalendarz prasłowian](kalendarz_praslowian.cpp/)

Grażyna, Janusz i Stach zostali wysłani w czasie, by pomóc prasłowianom rozwiązać tajemniczy problem związany z ich kalendarzem rolniczym. Wierzyli oni, że aby przewidzieć najlepsze dni na siewy i zbiory, należy dokonać odpowiednich obliczeń na podstawie zestawu liczb związanych z obserwacją księżyca i gwiazd.

Według miejscowych starców, liczby mające parzystą liczbę unikalnych dzielników pierwszych są uważane za stabilne i korzystne dla upraw. Spośród nich trzeba jednak wybrać dokładnie k-tą pod względem wielkości, by zgodnie z tradycją ogłosić dzień rozpoczęcia prac polowych. Jeśli liczba spełniająca warunki nie zostanie znaleziona na czas, rok może być uznany za stracony, a zbiory zagrożone.

Twoim zadaniem jest pomóc podróżnikom w przeanalizowaniu danych liczbowych i znalezieniu właściwej liczby, by ocalić zbiory prasłowian.
Wejście:

Na wejściu znajduje się liczba t, oznaczająca liczbę zestawów danych. Następnie dla każdego zestawu danych podano:

    liczbę n, oznaczającą liczbę obserwowanych wartości liczbowych,
    n liczb naturalnych a1, a2, ..., an, wartości tych liczb,
    liczbę k, wskazującą pozycję szukanej wartości.

1 ≤ t ≤ 10
1 ≤ n ≤ 1000000
1 ≤ ai ≤ 1000000
0 ≤ k < n
Wyjście:

Dla każdego zestawu danych należy wypisać k-tą wartość spośród tych korzystnych. Jeśli takich liczb jest mniej niż k, należy wypisać BRAK DANYCH.
Przykład:
#### Wejście:
2
5
12 15 9 10 6
2
4
8 14 7 18
2

#### Wyjście:
12
BRAK DANYCH

UWAGA! Zadanie należy rozwiązać wykorzystując algorytm selekcji.

### [Ogródki działkowe](ogrodki_dzialkowe.cpp/)

Nieopodal gospodarstwa Uli znajdują się pozostałości po starych ogródkach działkowych. Nasza bohaterka postanowiła przestudiować mapę tego miejsca. Według tutejszych opowieści początkowo było tam n działek o kształtach prostokątnych. Boki tych prostokątów były równoległe do osi współrzędnych, a rogi znajdowały się w punktach o całkowitych współrzędnych. Ogrodzenia działek nie przecinały się, ale mogły się ze sobą stykać. Z biegiem czasu właściciele zaczęli łączyć działki w większe, ale tylko wtedy, gdy złączenie ich również tworzyło prostokąt. W końcu pozostał jeden właściciel i jedna duża działka.

Początkowo także na terenie każdej działki stał prostokątny budynek (na przykład szopa lub altanka). Boki również były równoległe do osi współrzędnych, a rogi znajdowały się w punktach o całkowitych współrzędnych. Niektóre budynki mogły stykać się z granicami ogrodzenia lub bokami innych budynków. Niestety dzisiaj nie wiadomo już gdzie przebiegały początkowe granice działek.

Ula podejrzewa, że cała ta historia jest nieprawdziwa i chce sprawdzić, czy dla zadanego rozmieszczenia budynków podział działek jest możliwy.
Wejście:

W pierwszej linii wejścia znajduje się liczba naturalna t - liczba testów.
Następnie dla każdego testu znajduje się opis terytorium działkowego. Test składa się z liczby naturalnej n, która oznacza liczbę budynków i działek. W kolejnych n liniach znajdują sie cztery liczby całkowite x1,y1,x2,y2, które są współrzędnymi kolejnych budynków, gdzie x1 i y1 to współrzędne lewego dolnego rogu, a x2 i y2 - prawego górnego. Należy przyjąć, że budynki nie nachodzą na siebie.
1 ≤ n ≤ 1000
0 ≤ x1,y1,x2,y2 ≤ 1000000000
Wyjście:

Na wyjściu dla każdego testu należy wypisać słowo TAK, jeżeli dla tak rozstawionych budynków możliwe jest podzielenie terytorium na działki zgodnie z zasadami. Jeżeli nie można wykonać takiego podziału, należy wypisać słowo NIE.
Przykład:
#### Wejście:
2
4
0 0 1 2
0 2 1 3
1 0 2 1
1 1 2 3
4
0 0 2 1
1 2 3 3
2 0 3 2
0 1 1 3

#### Wyjście:
TAK
NIE

### [Zadanie 1](zadanie1.cpp/)

Napisz program, który wczytuje n par liczb całkowitych i porządkuje je według następujących zasad:

    Liczby parzyste z pierwszych elementów par powinny znaleźć się na początku, a liczby nieparzyste na końcu.
    W obrębie liczb parzystych i nieparzystych obowiązuje porządek rosnący względem pierwszego elementu pary.
    Jeśli wartości pierwszych elementów z pary są równe, należy zachować kolejność wczytania pary.

Wejście:
W pierwszej linii znajduje się liczba całkowita n (1 ≤ n ≤ 30000) – liczba par. W kolejnej linii podano n par liczb całkowitych (a1, b1), (a2, b2), ..., (an, bn) (-106 ≤ ai, bi ≤ 106).
Wyjście:

Na wyjściu należy wyświetlić n liczb będących drugimi elementami par, uporządkowanych zgodnie z opisanymi zasadami.

UWAGA! W zadaniu nie można używać STL-a. Należy samodzielnie zaimplementować algorytm sortujący.

Przykład:
#### Wejście:
6  
7 20 2 30 3 40 8 50 6 60 5 70  

#### Wyjście:
30 60 50 40 70 20  


### [Zadanie 2](zadanie2.cpp/)

Napisz program, który obliczy wyrażenie zadane w Odwrotnej Notacji Polskiej (ONP).
Wejście:

W pierwszej linii znajduje się liczba całkowita t (1 ≤ t ≤ 10) – liczba testów. Następnie podanych jest t zestawów testowych. Na zestaw składa się liczba całkowita n (3 ≤ n < 1000000). W kolejnej linii podano n elementów, na które składają się liczby całkowite dodatnie (operandy) i operatory (+, -, *, /). Wyrażenie podane w linii stanowi poprawne wyrażenie w ONP i nie występuje w nim dzielenie przez 0. Należy założyć, że żadna z wartości: końcowa oraz pośrednie nie wykraczają poza zakres liczb long long. Dla operacji '/' przyjmij, że wykonywane jest dzielenie całkowite.
Wyjście:

Na wyjściu należy dla każdego wyrażenia wyświetlić jego wartość.

UWAGA! W zadaniu nie można używać STL-a. Dopuszczalne jest użycie typu string, strumieni, funkcji obsługujących konwersję napisów do liczb. Przydatne mogą być funkcje isdigit oraz stoi.

Przykład:
#### Wejście:
3
3
3 19 +
9
9 66 - 4 82 / * 45 +
7
95 32 + 24 + 8 - 

#### Wyjście:
22
45
143


