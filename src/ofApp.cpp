#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  // slowly flip through the flipbook
  ofSetFrameRate(15);

  // total pages in the Digital Harmony book
  numBookPages = 239;
  
  // load the pages from the Digital Harmony that have the mini-flipbook:
  // only load the 'right-hand' pages
  // since they have the flip book images in their top corner
  for(int i = 1; i < numBookPages; i = i +2){
    ofImage tempImg;
    tempImg.load("digitalHarmony/"+to_string(i)+".png");
    flipbook.push_back(tempImg);
  }

  // number of pages in the flipbook
  numFlipbookPages = flipbook.size();
  currentFlipbookPage= 0;
}

//--------------------------------------------------------------
void ofApp::update(){
  // cycle through the flip book pages (1 page per frame)
  if(currentFlipbookPage == numFlipbookPages -1){
    currentFlipbookPage = 0;
  }else{
    currentFlipbookPage++;
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  // only draw the subsection (flipbook in top corner) of the page
  // and scale it
  ofScale(2,2);
  flipbook[currentFlipbookPage].drawSubsection(0,0,150,150,550,0);
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
