.PHONY: clean All

All:
	@echo "----------Building project:[ cpp_classes - Debug ]----------"
	@"$(MAKE)" -f  "cpp_classes.mk"
clean:
	@echo "----------Cleaning project:[ cpp_classes - Debug ]----------"
	@"$(MAKE)" -f  "cpp_classes.mk" clean
