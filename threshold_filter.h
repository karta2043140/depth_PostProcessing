class threshold_filter
{
	public:
		threshold_filter();
		
		template<typename T>
		T* apply(T* data, size_t width, size_t height);
		
		void set_option(float _min, float _max, float _depth);
	
	private:
		
		float _min, _max, _depth;
		
}

