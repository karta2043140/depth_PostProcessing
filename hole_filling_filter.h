enum hole_filling_type : uint8_t
{
	fill_from_left,
	farest_from_around,
	nearest_from_around
};

class hole_filling_filter
{
	public:
		hole_filling_filter();
		
		template<typename T>
		void apply(T* data, size_t width, size_t height, uint8_t mode);
		
		template<typename T>
		void left(T* data, size_t width, size_t height);
		
		template<typename T>
		void farest(T* data, size_t width, size_t height);
		
		template<typename T>
		void nearest(T* data, size_t width, size_t height);
		
		void set_option(size_t width, size_t height, uint8_t mode);
	
	private:
		
		size_t _width, _height;
		uint8_t _mode;
		
}

