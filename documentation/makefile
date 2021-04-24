DOXY_FILE = Doxyfile
BUILD_FILE = html

FixPath = $(subst /,\,$1)
doc:
	doxygen ./$(DOXY_FILE)

clean:
	rm -rf html*