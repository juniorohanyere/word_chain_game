**Challenge:** `Word Chain Game`

In this challenge, you will create a Word Chain Game, also known as "word ladder." The goal of the game is to transform one word into another by changing only one letter at a time. Each intermediate word formed must be a valid word from the given word list.

Here are the steps to implement the game:

*Input:* Create a list of valid words (you can use a text file containing a dictionary of words). Ensure the words are in lowercase and without any punctuation.

*User Interface:* Create a simple command-line interface or graphical interface where players can input their starting word and target word.

*Word Validation:* Check if both the starting and target words are valid (exist in the word list).

*Word Chain Generation:* Implement an algorithm to generate the word chain from the starting word to the target word. Each step in the chain must involve changing only one letter while ensuring that the intermediate word is valid.

*Display the Word Chain:* Show the word chain from the starting word to the target word, along with the total number of steps taken. If no word chain is possible, inform the user.

*Optional Enhancement:* You can add a timer feature to see how quickly a player can find the word chain.

**Example:**
*Word List:* cat, cot, dog, dot, rat, rot, log, lot

*Input:*
*Starting word:* cat 
*Target word:* dog

*Output:*
cat -> cot -> dot -> dog (3 steps)

*Input:*
*Starting word:* rat
*Target word:* lot

*Output:*
rat -> rot -> lot (2 steps)

Remember to handle edge cases and provide clear instructions to the players. You can use any programming language of your choice for this challenge.
