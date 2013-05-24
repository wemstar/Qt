package gui.gra.rdzen;

import gui.gra.rdzen.wyjatki.EndGame;

import java.awt.Point;

public class Game {

	public Gracz getSecondPlayer() {
		// TODO Auto-generated method stub
		return secondPlayer;
	}

	public Gracz getFirstPlayer() {
		// TODO Auto-generated method stub
		return firstPlayer;
	}

	public void setPlayers(Gracz player1, Gracz player2) {
		firstPlayer=player1;
		secondPlayer=player2;
		
	}
	public boolean isEndGame()
	{
		return firstPlayer.przegrana()||secondPlayer.przegrana();
	}
	public boolean realPlayerMove(Point punkt)throws EndGame
	{
		boolean isHit=secondPlayer.reciveHit(punkt);
		firstPlayer.reciveHit(secondPlayer.getNextMove());
		if(isEndGame())
		{
			if(firstPlayer.przegrana())throw new EndGame("Przegral gracz 1");
			else throw new EndGame("Przegral gracz 2");
		}
		return isHit;
		
	}
	
	
	
	
	Gracz firstPlayer;
	Gracz secondPlayer;

}
