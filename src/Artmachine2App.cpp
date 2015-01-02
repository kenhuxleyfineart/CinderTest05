#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Artmachine2App : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void Artmachine2App::setup()
{	
	/*
	FIRST CHANGE MADE TO THIS FILE
	*/
}

void Artmachine2App::mouseDown( MouseEvent event )
{
}

void Artmachine2App::update()
{
}

void Artmachine2App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( Artmachine2App, RendererGl )
