# Pila con vettore e template

[Implementazione su Repl](https://repl.it/@EsterMolinari/PilaVettoreSlide#main.cpp)

Una **pila** una struttura dati con accesso di tipo **LIFO**, ovvero **"Last In, First Out"**.
Questo tipo di accesso garantisce l'inserimento dei dati all'inizio della pila (*head*) e la rimozione dei dati sempre dall'inizio della pila. La sua struttura ricorda quella di una lista il cui accesso è limitato al primo elemento memorizzato al suo interno.

![Immagine di una pila](https://cdn.programiz.com/sites/tutorial2program/files/stack.png)

# Specifica sintattica della struttura dati
## Tipi di dato
* pila
* boolean
* tipoelem

## Operatori
* creapila:   ( )              → pila
* pilavuota:  (pila)           → boolean 
* leggipila:  (pila)           → tipoelem
* fuoripila:  (pila)           → pila
* inpila:     (tipoelem, pila) → pila

# Specifica semantica della struttura dati
## Tipi di dato
* pila: insieme delle sequenze p = <a1, a2, …, an>, n >= 0, di elementi di tipo tipoelem gestita con accesso LIFO
  * Identificatore pila: p
  * Identificatore pila aggiornata: p'
  * Identificatore tipoelem: a
* boolean: insieme dei valori di verità
  * Identificatore boolean: b

## Operatori
* creapila = p
  * post: p = <> (la sequenza vuota) 
* pilavuota(p) = b
  * post: b = vero se p = <>, b = falso altrimenti
* leggipila(p) = a
  * pre: p = <a1, a2, …, an> n >= 1
  * post: a = a1
* fuoripila(p) = p'
  * pre: p = <a1, a2, …, an> n >= 1
  * post: p' = <a2, a3, …, an> se n > 1, p’ = <> se n = 1
* inpila(a, p) = p'
  * pre: p = <a1, a2, …, an> n >= 0
  * post: p' = <a, a1, a2, …, an>

La pila è un particolare tipo di lista, infatti l'implementazione di una pila si può esprimere come
* creapila() → crealista()
* pilavuota(p) → listavuota(p) 
* leggipila(p) → leggilista(primolista(p), p)
* fuoripila(p) → canclista(primolista(p), p)
* inpila(a, p) → inslista(a, primolista(p))

Gli elementi della pila vanno memorizzati in ordine inverso, mantenendo il cursore alla testa della pila.

Contenuto del programma:
* **`main.cpp`**
  * Contiene il main
* **`lista.h`**
  * Contiene la dichiarazione e l'implementazione della classe `class Lista`
* **`libro.h`**
  * Contiene la dichiarazione e l'implementazione della classe `class Libro`
  
In questo programma, tutti i file `.h` contengono tutte le implementazioni, quindi non è presente alcun file `.cpp`.

###### Se dovesse essere presente un file `main`, è stato generato in automatico da Repl ed è un file binario non utile ai fini del funzionamento del programma.

## Operatori della classe `class Pila`
1. `Pila()`
    * Costruttore dell'oggetto `Pila`
2. `Pila(int)`
    * Costruttore dell'oggetto `Pila`
3. `~Pila()`
    * Distruttore dell'oggetto `Pila`
4. `void creaPila()`
    * Crea una pila vuota
5. `bool pilaVuota() const`
    * Se la pila è vuota restituisce 1, altrimenti 0
6. `tipoelem leggiPila() const`
    * Restituisce un elemento di tipo tipoelem dalla pila
7. `void fuoriPila()`
    * Elimina un elemento in testa alla pila
        * Questo operatore può essere chiamato anche `void pop()`
8. `void inPila(tipoelem a)`
    * Inserisce un elemento di tipo tipoelem alla testa della pila
        * Questo operatore può essere chiamato anche `void push(tipoelem a)`
9. `void stampPila(Pila &p)`
    * Stampa tutti gli elementi di una pila

## Nota sull'uso della espressione finale `const`
La dicitura `<nome_funzione> () const` viene utilizzata quando non si desidera modificare i dati della struttura in uso.
Nel programma, questa viene usata nei seguenti metodi:
* `tipoelem getElemento() const;`
* `bool pilaVuota() const;`
* `tipoelem leggiPila() const;`

## Nota sul sovraccarico degli operatori
In questo programma c'è il sovraccarico dell'operatore `<<` e dell'operatore `==`.
Entrambi si trovano in `nodo.h` e servono per la classe `Libro`.
* `std::ostream& operator<<(std::ostream&, const Libro &l);`
  * Si occupa di permettere la stampa degli elementi di tipo Nodo come se fossero dati normali
    * In questo modo quando viene utilizzato `cout <<` non ci saranno problemi se l'oggetto da stampare ha un tipo definito dall'utente
* `bool operator==(Libro l);`
  * Si occupa di permettere il confronto tra due elementi di tipo Nodo come se fossero dati normali
    * In questo modo posso utilizzare `==` anche con oggetti di tipo definito dall'utente

In generale, per sovraccaricare un operatore del tipo `<<` si scrive:

`std::ostream& operator<<(std::ostream&, const <nome_classe> <nome_oggetto>);`

Invece, per sovraccaricare un operatore del tipo `==` si scrive:

`bool operator==(<nome_classe> <nome_oggetto>);`
