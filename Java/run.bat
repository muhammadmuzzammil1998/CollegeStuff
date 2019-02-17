@echo off
javac %1.java
java %1 %2
del %1.class
