#pragma once

using namespace std;
#include "ofMain.h"
#include <iostream>
#include "Paddle.h"
#include "Brick.h"
#include "PaddleL2.h"
#include "Ball.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void setBalls(int x);
		int getBalls();

		Paddle * paddle;
		//Brick *bricks[20];
		vector<Brick*> bricks; 
		Ball * ball;
		int dir, x, y, density, radius, length;
		bool level1, level2, level3, startScreen, mainScreen, startGame, gameOver;
		ofTrueTypeFont myFont;
		ofImage myImage;
		ofSoundPlayer mySound;
		ofRectangle textBox;
		//float ballX, ballY, ballXDirection, ballYDirection;
};
