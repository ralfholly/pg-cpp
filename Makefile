ifneq ($(words $(MAKECMDGOALS)), 1)
$(error "Please provide exactly one playground target name, ie. `make test-struct-assignment'")
endif

target := $(firstword $(MAKECMDGOALS))

$(target):
	@cp -r .template $(target)
	@cd $(target) && \
	mv _template.cpp $(target).cpp && \
	sed -i -r -e "s/_template/$(target)/g" *
