class money
{
	public:
		money (int r,int p)
		{
			rupees = r + p/100;
			paise = p % 100;
		}
		
		money operator+(const money& rhs) const
		{
			return money(rupees + rhs.rupees, paise + rhs.paise);
		}

		money operator-(const money& rhs) const
		{
			int d,e;
			if(rhs.paise > paise)
				d = rhs.paise - paise;
			else
				d = paise - rhs.paise;
			if(rupees > rhs.rupees)
				e=rupees - rhs.rupees;
			else
				e=rhs.rupees-rupees;


			return money(e, d);
		
		}

		int paisa() const
		{
			return 100*rupees + paise;
		}

		void print () const
		{
			printf("Rs %d paise %d\n",rupees,paise);
		}




	private:
		int rupees;
		int paise;
};
