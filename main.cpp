int main()
{
    // HIBA: szintaktikai hiba : változó név elírva
    /*
            NELEMENTS -> N_ELEMENTS
    */
    int *b = new int[NELEMENTS];
    // HIBA: aposztrófok használata idézőjelek helyett
    /*
             '1-100 ertekek duplazasa' ->  "1-100 ertekek duplazasa"
    */
    std::cout << '1-100 ertekek duplazasa'
   // HIBA: szintaktikai hiba a for ciklusnál
    /*
            feltétel magadás és inkrementálás hiányzik
    */
    for (int i = 0;)                           
    {
      // HIBA: hibás hivatkozás b tömb i-edik elemére
        // HIBA: 0 érték a tömb 0. eleme
        /*
            
                értékre hivatkozunk nem memóriacimre ezért * al kell jelölni
                i hez +1 kell, hogy 1-100 -as intervallumban maradjunk

        */
        b[i] = i * 2;                                             
    }
     // HIBA: szintaktikai hiba for ciklus feltétele hiányos
    /*
        
            < N_ELEMENTS-et hozzá kell adni a feltételbe
           
    */
    for (int i = 0; i; i++)                                       
    {
         // HIBA: lemaradt a kiiratas vegerol a hivatkozas az ertekre
         /*
            hozza kell adni:  << *(b + i) << '\n';
         */
        std::cout << "Ertek:"                                     
    }    
    std::cout << "Atlag szamitasa: " << std::endl;    
    // HIBA: atlag valtozo nem lett inicializálva
    /*
            atlag = 0;
            (szükséges mert ahhoz, hogy hozzáadjunk már kell hogy legyen értéke)
    */          
    int atlag;      
     // HIBA: , használata ; helyett                                              
    for (int i = 0; i < N_ELEMENTS, i++)                          
    {
        // HIBA: hibás hivatkozás b tömb i-edik elemére
        
        /*
                értékre hivatkozunk nem memóriacimre ezért * al kell jelölni
                és sor végén ;-t hozzaadni
        */
        atlag += b[i]                                             
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;