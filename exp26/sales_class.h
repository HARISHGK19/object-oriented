
#ifndef SALES_CLASS_H
#define SALES_CLASS_H

#include "permission_class.h"


/**
  * class sales_class
  * 
  */

class sales_class : public permission_class
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  sales_class();

  /**
   * Empty Destructor
   */
  virtual ~sales_class();

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
  void ads_sales_()
  {
  }


  /**
   */
  void edit_sales()
  {
  }


  /**
   */
  void delete_sales()
  {
  }


  /**
   */
  void search_sales()
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

  void ID;
  void cus_id;
  void sales_amount;
  void description;
  void salees_type;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param value the new value of ID
   */
  void setID(void value)
  {
    ID = value;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID()
  {
    return ID;
  }

  /**
   * Set the value of cus_id
   * @param value the new value of cus_id
   */
  void setCus_id(void value)
  {
    cus_id = value;
  }

  /**
   * Get the value of cus_id
   * @return the value of cus_id
   */
  void getCus_id()
  {
    return cus_id;
  }

  /**
   * Set the value of sales_amount
   * @param value the new value of sales_amount
   */
  void setSales_amount(void value)
  {
    sales_amount = value;
  }

  /**
   * Get the value of sales_amount
   * @return the value of sales_amount
   */
  void getSales_amount()
  {
    return sales_amount;
  }

  /**
   * Set the value of description
   * @param value the new value of description
   */
  void setDescription(void value)
  {
    description = value;
  }

  /**
   * Get the value of description
   * @return the value of description
   */
  void getDescription()
  {
    return description;
  }

  /**
   * Set the value of salees_type
   * @param value the new value of salees_type
   */
  void setSalees_type(void value)
  {
    salees_type = value;
  }

  /**
   * Get the value of salees_type
   * @return the value of salees_type
   */
  void getSalees_type()
  {
    return salees_type;
  }

  void initAttributes();

};

#endif // SALES_CLASS_H
