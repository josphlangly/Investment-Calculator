# CS305 Portfolio Submission

Briefly summarize your client, Artemis Financial, and their software requirements. Who was the client? What issue did they want you to address?

Artemis Financial is a consulting company that works with a customer's savings, retirements, investments, and insurance financial resources to develop personalized plans. Their goal is to create a RESTful web application programming interface (API) that's modern and up to date with software security concerns.

What did you do very well when you found your client’s software security vulnerabilities? Why is it important to code securely? What value does software security add to a company’s overall wellbeing?

Using both static and manual software testing to address security vulnerabilities, I analyzed code that was created to address their concerns as well as the dependencies of some of the plug-ins used to create the RESTful API. The static testing revealed dependencies that needed to be updated while the manual review allowed me to create code that incorporated input validation, secure API interaction using HTTPs and self-signed certificates, and better encryption processes for data transfers. Coding securely at the beginning of a project is better for long-term efficiency and overall software security. By taking into account potential vulnerabilities early, I was able to better incorporate secure coding through encapsulation and better error handling rather than having to go back and rewrite code later.

What part of the vulnerability assessment was challenging or helpful to you?

The vulnerability assessment was a good checklist to keep in mind throughout coding to make sure I followed best software security practices. It's easy to overlook minor security vulnerabilities when lacking basic guidelines and the assessment provided that. The challenge wasn't in using the assessment but determining where each part of the process would apply to certain bits of code being written which required good analysis and logical thinking.

How did you increase layers of security? In the future, what would you use to assess vulnerabilities and decide which mitigation techniques to use?

Having multiples layers of security is crucial. And doubling up on features is never a bad idea. Like using HTTPS and a certificate and good input validation etc. The dependency check was also helpful but certainly a little more vague in determining which dependencies were actually being called upon in the code created. While it's always good to keep dependencies up to date, sometimes, there is no updated version that actually addresses the security concern, which is another reason why having different layers is paramount.

How did you make certain the code and software application were functional and secure? After refactoring the code, how did you check to see whether you introduced new vulnerabilities?

Error handling, good debugging, and slow coding was the best way to ensure functionality and security. When writing any new encapsulated piece of code, I always added some kind of error catch that would allow me to run code without everything being fully developed and still see progress. And it's important to run static testing tools before, during, and after any refactoring so setting up Maven and the dependency check was the first thing before any written code or manual review.

What resources, tools, or coding practices did you use that might be helpful in future assignments or tasks?

Maven and the OWASP dependency check, the vulnerability assessment diagram, and encryption techniques were the biggest coding tools used that would certainly be helpful in future secure coding assignments. And practicing encapsulation and error handling are always a part of good coding practice.

Employers sometimes ask for examples of work that you have successfully completed to show your skills, knowledge, and experience. What might you show future employers from this assignment?

Showing that I can write different types of encryption or ciphers into code, encapsulate information, generate a certificate, establish HTTPS, and using depedency checking are all thing that I think would be valued by employers.
