# 19.CPP-MODULE-07

* [Templates](#Templates)  
* [Templates de classe](#Templates-de-classe)  

### Templates
> Self-explanatory see the example
```C++
template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

min(2,3)           		// return 3		Implicit instanciation
max<std::string>("str1","str2")	// return str2		Explicit instanciation

```

### Templates de classe
```C++
template<typename T> class randomClasse
{
	randomClasse<T>(void);
	~randomClasse<T>(void);
}
```
