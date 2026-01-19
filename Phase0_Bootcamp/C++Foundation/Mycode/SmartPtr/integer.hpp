#pragma once

class Integer{

	int *ptr;
	public:
		Integer();
		Integer(int);
		Integer(Integer &);
		Integer(Integer &&);
		Integer & operator=(Integer &);
		Integer & operator=(Integer &&);
		
		void SetValue(int);
		int GetValue();
		~Integer();
};

