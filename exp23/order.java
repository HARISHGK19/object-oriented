

/**
 * Class order
 */
public class order extends delivery, items {

  //
  // Fields
  //

  private void id;
  private void date;
  private void items;
  private void payment;
  
  //
  // Constructors
  //
  public order () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of id
   * @param newVar the new value of id
   */
  public void setId (void newVar) {
    id = newVar;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  public void getId () {
    return id;
  }

  /**
   * Set the value of date
   * @param newVar the new value of date
   */
  public void setDate (void newVar) {
    date = newVar;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  public void getDate () {
    return date;
  }

  /**
   * Set the value of items
   * @param newVar the new value of items
   */
  public void setItems (void newVar) {
    items = newVar;
  }

  /**
   * Get the value of items
   * @return the value of items
   */
  public void getItems () {
    return items;
  }

  /**
   * Set the value of payment
   * @param newVar the new value of payment
   */
  public void setPayment (void newVar) {
    payment = newVar;
  }

  /**
   * Get the value of payment
   * @return the value of payment
   */
  public void getPayment () {
    return payment;
  }

  //
  // Other methods
  //

  /**
   */
  public void add()
  {
  }


  /**
   */
  public void update()
  {
  }


}
