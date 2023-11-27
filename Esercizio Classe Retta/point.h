/*
 * Header File: point.h
 * -------------
 * Dichiarazione della classe Point
*/

// L'uso della direttiva al preprocessore #ifndef
//previene l'inclusione multipla di header file per la stessa classe
#ifndef point_H
#define point_H

/*
 * Class: Point
 * ------------
 * Rappresenta un punto di coordinate reali (x, y) sul piano cartesiano bidimensionale.
 */
class Point {
	private:
		double coordX, coordY; //attributi privati
	public:
		/*
		 * Costruttore di default
		 * -------------------------
		 * Crea un oggetto di tipo point con coordinate 0, 0
		 */
		Point();

		/*
		 * Costruttore con parametri
		 * -------------------------
		 * Crea un oggetto di tipo point con specifiche coordinate x e y
		 * passate come parametro
		 */
		Point(double x, double y);

		/*
		 * Distruttore
		 * -------------------------
		 * Distruttore dell'istanza di un oggetto di tipo point.
		 * Viene richiamato all’uscita del blocco in cui è stato
		 * dichiarato l’oggetto.
		 */
		~Point();

		/*
		 * Metodo: getCoordX
		 * -------------------------
		 * Restituisce la coordinata x del punto.
		 */
		double getCoordX();

		/*
		 * Metodo: setCoordX
		 * -------------------------
		 * Imposta la coordinata x del punto.
		 */
		void setCoordX(double x);

		/*
		 * Metodo: getCoordY
		 * -------------------------
		 * Restituisce la coordinata y del punto.
		 */
		double getCoordY();
		/*
		 * Metodo: setCoordY
		 * -------------------------
		 * Imposta la coordinata y del punto.
		 */
		void setCoordY(double y);

		/*
		 * Metodo: setCoords
		 * -------------------------
		 * Imposta la coordinate x e y del punto.
		 */
		void setCoords(double x, double y);

		/*
		 * Metodo: read
		 * -------------------------
		 * Metodo per richiedere da tastiera le coordinate di un punto.
		 */
		void read();

		/*
		 * Metodo: print
		 * -------------------------
		 * Metodo per visualizzare a video un punto nella forma (x; y)
		 */
		void print();

		/*
		 * Metodo: midPoint
		 * -------------------------
		 * Metodo che restituisce le coordinate del punto medio fra il punto
		 * p e il punto rappresentato dall’istanza chiamante del metodo.
		 */
		Point midPoint(Point p);

		/*
		 * Metodo: distance
		 * -------------------------
		 * Metodo per calcolo della distanza tra il punto p e il punto
		 * rappresentato dall’istanza chiamante del metodo
		 */
		double distance(Point p);

		/*
		 * Funzione friend: isSymmetricalY
		 * -------------------------
		 * Funzione che restituisce true se due punti p1 e p2 passati come
		 * parametri sono simmetrici rispetto all’asse y, false altrimenti.
		 */
		friend bool isSymmetricalY(Point p1, Point p2);
};
#endif


