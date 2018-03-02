#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  color c;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  ident(transform);



  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s);
  else
    parse_file( "stdin", transform, edges, s);



  // add_edge(edges, 100, 175, 0, 100, 375, 0);
  // add_edge(edges, 400, 175, 0, 400, 375, 0);
  // add_edge(edges, 100, 175, 0, 250, 100, 0);
  // add_edge(edges, 400, 175, 0, 250, 100, 0);
  // add_edge(edges, 250, 100, 0, 250, 300, 0);
  //
  // matrix_mult(make_translate(100, -50, 30), transform);
  //
  // matrix_mult(make_scale(0.5, 0.5, 0.5), transform);
  //
  // matrix_mult(make_rotZ(10), transform);
  // matrix_mult(make_rotX(45), transform);
  // matrix_mult(make_rotY(30), transform);
  //
  //
  //
  // print_matrix(transform);
  // matrix_mult(transform, edges);
  // draw_lines(edges, s, c);
  // display(s);
  // save_extension(s, "result.png");

  free_matrix( edges );
  free_matrix( transform );
}
