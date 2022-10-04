class banner{
	public:
		bool Resize(float w,float h)
		{
			if (w>=h)
			{
				width = w;
				height = h;
				return true;

			}
			return false;
		}

		double Area() const
		{
			return width * height;
		}

		banner()
		{
			width=20;
			height=5;
		}

	private:
		float width;
		float height;
};
