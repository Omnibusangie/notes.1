/*

Different libraries can be stored or used differently

<_fStream>
	ifstream (input files)
	ofstream (output file)
	
	objects of these classes are variables used for reading and writing to files
	
	reading/writing mostly happens through dot funcions 
		exampes:
					.open( "filename" ) << gets file ready for reading or writing
					.fail() 			<< no input in the function: returns boolian (T/F) response, if you .open fails (typed it wrong or not in the correct locaion) the entire program won't crash
					.close() 			<< closes file
	
	input and output 
		>> [reads value from file]
		<< [writes to a file]
		
*/
