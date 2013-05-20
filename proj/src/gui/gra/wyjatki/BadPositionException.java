package gui.gra.wyjatki;

import java.awt.Point;

public class BadPositionException extends Exception {

	public BadPositionException(Point punkt) {
		super(String.format(" Zły punkt %1$d %2$d", punkt.x,punkt.y));
	}
	
	

}
