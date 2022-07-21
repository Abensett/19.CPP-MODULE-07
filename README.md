# 19.CPP-MODULE-07

* [Templates](#Templates)  
* [Templates de classe](#Templates-de-classe)  
* [Default type && operator overload](#efault-type-&&-operator-overload)  
* [Specialization](#Specialization)  
* [Parametric macros](#Parametric-macros)  

### Templates
> Self-explanatory see the example
```C++
template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

min(2,3)           				// return 3		Implicit instanciation
max<std::string>("str1","str2")			// return str2		Explicit instanciation

```

### Templates de classe
```C++
template<typename T> class randomClasse
{
	randomClasse<T>(void);
	~randomClasse<T>(void);
	...
}
```


### Default type && operator overload
```C++
template<typename T = int> class randomClasse	// default type is integer	
{...}

template<typename T> ostream & operator<<(...)	// operator overloads have to be templates as well

```

### Specialization
> Variante d'un template qui peut être partielle ou complète
```C++
template<typename T, typename U> class randomClass	
{...}

template<typename U>				// Partial
class randomClass<int, U> {...}

template<>
class randomClass<bool, bool> {...}		// Full

```

### Parametric macros
> kind of templates in c
> Pas ouf, limites vite atteintes
```C
#define max(x,y) (((x)==(y)) > (x) : (y))
```
