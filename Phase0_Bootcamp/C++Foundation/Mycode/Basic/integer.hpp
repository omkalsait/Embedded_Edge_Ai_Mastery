#pragma once

class Integer {
	
	int * ptr;
	public:
		Integer();
		Integer(int);
		Integer(const Integer &);

		//Integer(Integer &);
		Integer(Integer &&);
		Integer operator+(const Integer&);
		Integer& operator=(const Integer&);
		Integer& operator=(Integer &&i);
		int GetValue() const;
		void SetValue(int);
		~Integer();
};
