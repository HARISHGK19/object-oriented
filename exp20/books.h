
#ifndef BOOKS_H
#define BOOKS_H

#include "library.h"

#include <vector>



/**
  * class books
  * 
  */

class books : public library
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  books();

  /**
   * Empty Destructor
   */
  virtual ~books();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void show()
  {
  }


  /**
   */
  void publish()
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  void title;
  void author_name;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of title
   * @param value the new value of title
   */
  void setTitle(void value)
  {
    title = value;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  void getTitle()
  {
    return title;
  }

  /**
   * Set the value of author_name
   * @param value the new value of author_name
   */
  void setAuthor_name(void value)
  {
    author_name = value;
  }

  /**
   * Get the value of author_name
   * @return the value of author_name
   */
  void getAuthor_name()
  {
    return author_name;
  }

  void initAttributes();

};

#endif // BOOKS_H
