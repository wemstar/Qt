package gui.gra.rdzen.wyjatki;

import java.awt.Point;

/**
 * @author wemstar
 *	wyjatek rzucany podczas próby nieodpowiedniego ustawienia statku
 */
public class BadPositionException extends Exception {

	public BadPositionException(Point punkt) {
		super(String.format(" Zły punkt %1$d %2$d", punkt.x,punkt.y));
	}
	
	
	

}
