# Shopping-System-Task
Group 


# Shopping Management System 

# 1. Laiba – Create + Read

## A. Create Product (Add Product)

Line 1: Add Product Function

This function is created to add new products to the shopping management system. Its return type is `void`, which means it does not return any value.

Line 2: Variable Declaration

Four variables are declared:

- ID: Stores the unique identification number of the product.
- Quantity: Stores the available stock.
- Name: Stores the product name.
- Price: Stores the product price.

Line 3: Product ID Input

The user enters a product ID. Every product has its own identification number.

Line 4: Duplicate ID Checking

The system checks whether the entered product ID already exists in the inventory. For this purpose, the `searchIndex()` function is called.

Line 5: Duplicate ID Condition

If the `searchIndex()` function returns a value other than -1, it means the product ID already exists.

Line 6: Return Statement

If a duplicate ID is found, the function terminates, and the new product is not added.

Line 7: Product Name Input

The user enters the name of the product.

Line 8: Whitespace Handling

The `ws` manipulator removes extra whitespace left in the input stream before reading the product name.

Line 9: Getline Function

The `getline()` function reads the complete product name, including spaces.

Example: Face Wash or Hair Oil.

Line 10: Product Price Input

The user enters the price of the product.

Line 11: Quantity Input

The user enters the available quantity of the product.

Line 12: Input Validation

The system checks that the product ID and price are positive and the quantity is not negative.

Line 13: Invalid Input Condition

If any invalid value is entered, the system displays an Invalid Input message.

Line 14: Product Addition

A new Product object is created and added to the vector using the `push_back()` function.

Line 15: Success Message

After successfully adding the product, the system displays a confirmation message.

### Why do we use Create?

We use the Create operation to add new products to the shopping inventory and maintain their records.

## B. Read Product (Display Products)

Line 1: Display Products Function

This function is created to display all available products in the inventory.

Line 2: Empty Checking

The system checks whether the vector is empty or contains products.

Line 3: Empty Condition

If the vector is empty, the system displays a No Products Available message.

Line 4: Return Statement

If no products are available, the function terminates.

Line 5: Display Heading

The system displays the All Products heading before showing the product details.

Line 6: For Loop

The for loop accesses all products stored in the vector one by one.

Line 7: Vector Size

The `size()` function returns the total number of products stored in the vector.

Line 8: Product Display Function

For every product, the display function of the Product class is called.

Line 9: Product Details

The display function shows the product ID, name, price, and quantity.

### Why do we use Read?

We use the Read operation to view all available products and their information without changing the inventory.

# 2. Esha – Update Product

Line 1: Update Function

This function is created to modify the information of an existing product.

Line 2: Variable Declaration

ID, quantity, name, and price variables are declared to store the updated product information.

Line 3: Product ID Input

The user enters the ID of the product that needs to be updated.

Line 4: Search Index Function

The `searchIndex()` function searches for the entered product ID and returns its position.

Line 5: Product Not Found Condition

If the returned index is -1, it means the product does not exist in the inventory.

Line 6: Return Statement

If the product is not found, the update operation terminates.

Line 7: New Name Input

The user enters the new name of the product.

Line 8: Whitespace Handling

The `ws` manipulator handles extra whitespace before reading the new name.

Line 9: Getline Function

The `getline()` function reads the complete new product name, including spaces.

Line 10: New Price Input

The user enters the updated price of the product.

Line 11: New Quantity Input

The user enters the updated quantity of the product.

Line 12: Input Validation

The system checks that the new price is positive and the quantity is not negative.

Line 13: Invalid Input

If invalid information is entered, an error message is displayed, and the update operation stops.

Line 14: Set Name

The setter function changes the old product name to the new name.

Line 15: Set Price

The setter function replaces the old price with the updated price.

Line 16: Set Quantity

The setter function replaces the old quantity with the updated quantity.

Line 17: Success Message

After successfully updating the product, a confirmation message is displayed.

### Why do we use Update?

We use the Update operation to modify existing product information without deleting the product and adding it again.

Example: If a product's old price is Rs. 500 and its new price becomes Rs. 600, the Update operation changes its price to Rs. 600.

# 3. Momina – Delete Product

Line 1: Delete Function

This function is created to remove an existing product from the shopping inventory.

Line 2: ID Variable

An integer variable is declared to store the product ID.

Line 3: Product ID Input

The user enters the ID of the product that needs to be deleted.

Line 4: Search Index

The `searchIndex()` function searches for the product and returns its position.

Line 5: Product Found Condition

The system checks whether the returned index is not equal to -1.

Line 6: Erase Function

The `erase()` function removes the selected product from the vector.

Line 7: Begin Function

The `begin()` function returns an iterator pointing to the first element of the vector.

Line 8: Index Addition

The index is added to the beginning iterator to locate the required product.

Line 9: Success Message

After deleting the product, the system displays Product Deleted Successfully.

Line 10: Else Condition

If the product is not available, the else condition is executed.

Line 11: Not Found Message

The system displays a Product Not Found message.

### Why do we use Delete?

We use the Delete operation to remove unwanted, unnecessary, or discontinued products from the shopping inventory.

# 4. Kiran – Search Product

Two functions are used for searching products.

## A. Search Index Function

Line 1: Function Declaration

This is an integer return-type function that finds the position of a product in the vector.

Line 2: ID Parameter

The function receives the product ID that needs to be searched.

Line 3: For Loop

The for loop checks all products in the inventory one by one.

Line 4: Loop Condition

The loop continues until all products in the vector have been checked.

Line 5: Product ID Comparison

The system compares the current product ID with the entered ID.

Line 6: Return Index

If the IDs match, the function returns the index of the product.

Line 7: Return -1

If the product is not found after checking all products, the function returns -1.

Important: This searching technique is called Linear Search because it checks elements one by one.

## B. Search Product Function

Line 1: Function Declaration

This function provides the user with the facility to search for a specific product.

Line 2: ID Variable

An integer variable is declared to store the product ID.

Line 3: Input

The user enters the product ID that needs to be searched.

Line 4: Search Index Call

The `searchIndex()` function is called to find the position of the product.

Line 5: Product Found Condition

If the returned index is not -1, it means the product exists.

Line 6: Product Found Message

The system displays a Product Found message.

Line 7: Display Function

The complete details of the found product are displayed.

Line 8: Else Condition

If the product is not found, the else condition is executed.

Line 9: Not Found Message

The system displays Product Not Found.

### Why do we use Search?

We use the Search operation to find a specific product through its unique ID instead of manually checking all products.

# 5. Amina – Display

Line 1: Display Function

This function displays all products available in the inventory.

Line 2: Empty Condition

First, the system checks whether the vector contains any products.

Line 3: Empty Message

If no products are available, the system displays No Products Available.

Line 4: Return Statement

The function terminates if the inventory is empty.

Line 5: Display Heading

The system displays the All Products heading.

Line 6: For Loop

The for loop accesses all products one by one.

Line 7: Vector Size

The loop uses the total number of products stored in the vector.

Line 8: Display Call

The Product class display function is called for each product.

Line 9: Product Information

The system displays the product ID, name, price, and quantity.

### Why do we use Display?

We use the Display operation to show the complete inventory record so that the shopkeeper can easily check available products and their quantities.

Difference between Laiba and Amina: Laiba explains the Read operation, while Amina explains how product information is displayed on the screen. Both are implemented through the same `displayProducts()` function in this project.

# 6. Amama – Login + Exit

## A. Login Function

Line 1: Boolean Function

The login function has a Boolean return type. It returns either true or false.

Line 2: Variables

Variables are declared to store the username and password during account creation and login.

Line 3: Create Account Heading

The system displays the Create Account heading.

Line 4: Create Username

The user enters a username.

Line 5: Create Password

The user enters a password.

Line 6: Account Created Message

The system displays an Account Created Successfully message.

Line 7: Login Heading

The login section starts, and the system displays the User Login heading.

Line 8: Login Username

The user enters the username again.

Line 9: Login Password

The user enters the password again.

Line 10: If Condition

The system compares the created username and password with the entered login credentials.

Line 11: AND Operator

The AND operator means both conditions must be true for successful login.

Line 12: Successful Login

If both credentials match, the system displays Login Successful.

Line 13: Return True

The function returns true, allowing the user to access the shopping menu.

Line 14: Invalid Message

If the credentials do not match, the system displays Invalid Username or Password.

Line 15: Return False

The function returns false, and the shopping menu does not open.

## B. Main Function

Line 1: Main Function

Program execution starts from the main function.

Line 2: ShoppingSystem Object

An object named shop is created from the ShoppingSystem class.

Line 3: Login Call

The login function is called using the shop object.

Line 4: If Condition

The system checks whether the login is successful.

Line 5: Menu Call

If login is successful, the shopping management menu opens.

Line 6: Program Ended

After exiting the menu, the system displays Program Ended.

Line 7: Return Zero

Returning zero indicates that the program has terminated successfully.

## C. Exit Option

Line 1: Choice 9

When the user selects option 9 from the menu, the exit case is executed.

Line 2: Thank You Message

The system displays a thank-you message.

Line 3: Break

The break statement terminates the switch statement.

Line 4: Do-While Condition

The do-while loop checks whether the selected choice is 9. If it is 9, the loop terminates.

### Why do we use Login and Exit?

Login provides access control to the system, while Exit allows the user to close the program properly.

# 7. Maham – Discount + Tax Calculation

Four functions are used in this section.

## A. Calculate Discount

Line 1: Function Declaration

This is a double return-type function that calculates the discount amount.

Line 2: Amount Parameter

The function receives the customer's subtotal.

Line 3: If Condition

The system checks whether the subtotal is Rs. 5000 or more.

Line 4: Discount Calculation

If the subtotal is Rs. 5000 or above, a 10% discount is calculated.

Line 5: Return Discount

The calculated discount amount is returned.

Line 6: Return Zero

If the subtotal is less than Rs. 5000, the function returns zero discount.

### Why do we use Calculate Discount?

We use this function to provide customers with a 10% discount on purchases of Rs. 5000 or more.

## B. Calculate Tax

Line 1: Function Declaration

This is a double return-type function that calculates tax.

Line 2: Amount Parameter

The function receives the remaining amount after discount.

Line 3: Tax Calculation

The system calculates 5% tax on the remaining amount.

Line 4: Return Tax

The calculated tax amount is returned.

### Why do we use Calculate Tax?

We use this function to calculate and include 5% tax in the customer's bill.

## C. Calculate Total

Line 1: Function Declaration

This function calculates the customer's final bill.

Line 2: Subtotal Parameter

The function receives the subtotal of the purchase.

Line 3: Discount Function Call

The Calculate Discount function is called to calculate the discount amount.

Line 4: After Discount

The discount is subtracted from the subtotal.

Line 5: Tax Function Call

The Calculate Tax function is called to calculate 5% tax on the remaining amount.

Line 6: Final Total

The tax is added to the amount after discount.

Line 7: Return Total

The final bill amount is returned.

### Why do we use Calculate Total?

We use this function to combine discount and tax calculations and calculate the final bill.

## D. Purchase Product

Line 1: Purchase Function

This function provides customers with the facility to purchase products.

Line 2: Variables

Variables are declared to store the product ID and purchase quantity.

Line 3: Product ID Input

The customer enters the product ID.

Line 4: Search Index

The system searches for the product using its ID.

Line 5: Product Not Found

If the product does not exist, the purchase operation stops.

Line 6: Quantity Input

The customer enters the required purchase quantity.

Line 7: Quantity Validation

The system checks that the quantity is positive and does not exceed the available stock.

Line 8: Invalid Quantity

If the entered quantity is invalid or stock is insufficient, an error message is displayed.

Line 9: Subtotal

The system multiplies the product price by the purchase quantity to calculate the subtotal.

Line 10: Discount

The Calculate Discount function calculates the discount.

Line 11: After Discount

The discount is subtracted from the subtotal.

Line 12: Tax

The Calculate Tax function calculates the tax.

Line 13: Total

The Calculate Total function calculates the final bill.

Line 14: Stock Update

The purchased quantity is subtracted from the available stock.

Line 15: Bill Heading

The system displays the Customer Bill heading.

Line 16: Product Name

The purchased product name is displayed.

Line 17: Quantity

The purchased quantity is displayed.

Line 18: Subtotal

The subtotal of the purchase is displayed.

Line 19: Discount

The discount amount is displayed.

Line 20: After Discount

The amount remaining after discount is displayed.

Line 21: Tax

The 5% tax amount is displayed.

Line 22: Final Amount

The customer's final bill is displayed.

Line 23: Earn Points

The system calculates loyalty reward points according to the final bill amount.

Line 24: Purchase Successful

The system displays a Purchase Successful message.

### Why do we use Purchase Product?

We use this function to allow customers to purchase products, calculate their bills, and automatically update the inventory stock.

# 8. Sitwat – Unique Features

Our Shopping Management System includes two advanced features:

1. Loyalty Reward Points
2. Low Stock Alert

## A. Loyalty Points Class

Line 1: Class Declaration

A separate class named LoyaltyPoints is created to manage customer reward points.

Line 2: Private Points Variable

A private integer variable is declared to store the customer's reward points.

Line 3: Public Section

The public section contains functions that manage customer points.

Line 4: Constructor

The constructor is automatically called when a LoyaltyPoints object is created.

Line 5: Initial Points

The customer's starting reward points are initialized to zero.

## B. Earn Points Function

Line 1: Function Declaration

This function calculates reward points according to the customer's purchase amount.

Line 2: Amount Parameter

The function receives the customer's final bill amount.

Line 3: Points Calculation

The system awards one reward point for every Rs. 100 spent.

Line 4: Total Points

The newly earned points are added to the customer's previous total points.

Line 5: Congratulations Message

The system displays a Congratulations message.

Line 6: Earned Points

The system informs the customer how many reward points have been earned.

### Why do we use Earn Points?

We use this feature to reward customers and encourage them to shop again.

## C. Display Points Function

Line 1: Function Declaration

This function displays the customer's total reward points.

Line 2: Output

The system displays the total accumulated points.

### Why do we use Display Points?

We use this function to allow customers to check their earned reward points.

## D. Low Stock Alert

Line 1: Function Declaration

This function identifies products whose available stock is low.

Line 2: Boolean Variable

A Boolean variable named found is initially set to false. It indicates whether any low-stock product has been found.

Line 3: Heading

The system displays the Low Stock Alert heading.

Line 4: For Loop

The loop checks all products stored in the inventory.

Line 5: Loop Condition

The loop continues until all products have been checked.

Line 6: Quantity Condition

The system checks whether a product's quantity is 5 or less.

Line 7: Product Display

If the condition is true, the complete details of that product are displayed.

Line 8: Found True

The found variable becomes true, indicating that a low-stock product has been found.

Line 9: Not Found Condition

If no low-stock product is found, the found variable remains false.

Line 10: Sufficient Stock Message

The system displays All Products Have Sufficient Stock.

### Why do we use Low Stock Alert?

We use this feature to inform the shopkeeper about products with low quantities so they can be restocked on time.

# 9\. Quick Revision – All Group Members

| Member | Assigned Function | Main Purpose |
| --- | --- | --- |
| Laiba | Create + Read | Add and view products |
| Esha | Update | Modify product information |
| Momina | Delete | Remove products |
| Kiran | Search | Find specific products |
| Amina | Display | Show all products |
| Amama | Login + Exit | User authentication and program termination |
| Maham | Discount + Tax | Calculate the final bill |
| Sitwat | Unique Features | Reward points and stock alerts |
