cd ..
javac -d bin ./access/modifier/modifiers.java
javac -d bin ./access/user/user.java
cd bin
java access.modifier.child
java access.modifier.modifiers
java access.modifier.user
java access.user.child
java access.user.user
