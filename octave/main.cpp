#include <oct.h>
#include <octave.h>
#include <parse.h>
#include <toplev.h> /* do_octave_atexit */

int main (const int argc, char ** argv)
{
const char * argvv [] = {"" /* name of program, not relevant */, "--silent"};

  octave_main (2, (char **) argvv, true /* embedded */);

  octave_value_list functionArguments;

  functionArguments (0) = 2;
  functionArguments (1) = "D. Humble";

  Matrix inMatrix (2, 3);

  inMatrix (0, 0) = 10;
  inMatrix (0, 1) = 9;
  inMatrix (0, 2) = 8;
  inMatrix (1, 0) = 7;
  inMatrix (1, 1) = 6;
  functionArguments (2) = inMatrix;

const octave_value_list result = feval ("exampleOctaveFunction", functionArguments, 1);

  std::cout << "resultScalar is " << result (0).scalar_value () << std::endl;
  std::cout << "resultString is " << result (1).string_value () << std::endl;
  std::cout << "resultMatrix is\n" << result (2).matrix_value ();

  clean_up_and_exit (0);
}
