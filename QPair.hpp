template <typename F, typename S>
class QPair 
{
	public:
	F first;
	S second;
	
	QPair(); 
	QPair(F defFirst, S defSecond)
	{
		first = defFirst;
		second = defSecond;
	}
	QPair operator=(QPair pair)
	{
		this->first = pair.first;
		this->second = pair.second;
		return *this; 
	}

};
