@echo off
javac %1.java
java %1
del %1.class
