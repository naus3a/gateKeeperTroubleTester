#include "ofApp.h"

bool bFile = false;
bool bGoodFile = false;
string s = "";
string sResult = "";

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  ofSetFrameRate(60);
  ofSetVerticalSync(true);
  
  bFile = false;
  ofxXmlSettings xml;
  if(xml.load("file.xml")){
    bFile = true;
    if(xml.tagExists("xml")){
      xml.pushTag("xml");
      s = xml.getValue("foo", "");
      xml.popTag();
      bGoodFile = true;
    }else{
      ofLogError("Bad xml file");
    }
  }else{
    bFile = false;
    ofLogError("Cannot reach xml file");
  }
  
  sResult = "file.xml ";
  sResult += bFile?"FOUND":"NOT FOUND";
  sResult += "\n";
  sResult += "the file is ";
  sResult += bGoodFile?"GOOD":"CORRUPTED";
  sResult += "\n";
  sResult += "the <foo> tag is: ";
  sResult += s;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofDrawBitmapString(sResult, 20, 20);
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
