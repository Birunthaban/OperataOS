#include "frame_buffer.c"
#include "serial_port.c"

void kmain(){
    
	char buffer[] = "Welcome To Operata";
	fb_write(buffer,sizeof(buffer));
       
	serial_configure(SERIAL_COM1_BASE, Baud_115200);
  	serial_write(SERIAL_COM1_BASE, buffer, sizeof(buffer));
  	
}
