/* 	ask the user for a number input, which will act as the en/decryption SHIFT_CODE
		use that input as a seed number for en/decryption later
		srand(SHIFT_CODE)
	ask the user for a string of text to be en/decrypted
		convert the string of text to "num_let" (0-25)
			shift the "num_let" to "num_let2" and then convert it back to ASCII
				num_let2 = (num_let + rand()) % 26
				if(num_let2 < 0)
				{
					num_let2 += 26;
				}
				
				num_let2 += 65
	cout << num_let2 << endl; ** DONT OUTPUT YET** 
	//output at the very very end: because it will vary based on if the user wants to en/decrypt 
	
	**must add a decryption line
	
	at the beginning, ask the user: encrypt or decrypt? 
	if(encrypt = TRUE)
	{
		run encryption code block, as read from above
	}
	else
		run the same encryption code block, but subtract the random number shift
			num_let2 = (num_let - rand()) % 26
			if(num_let2 < 0) 
			
			etc...
			
*/


/*

en/decryptions must be separate functions


	
