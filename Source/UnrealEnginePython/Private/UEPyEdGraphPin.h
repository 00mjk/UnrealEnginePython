#pragma once

#if WITH_EDITOR

#include "UnrealEnginePython.h"

#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"

typedef struct {
	PyObject_HEAD
	/* Type-specific fields go here. */
	UEdGraphPin *pin;
} ue_PyEdGraphPin;

PyObject *py_ue_new_edgraphpin(UEdGraphPin *);
ue_PyEdGraphPin *py_ue_is_edgrahpin(PyObject *);

void ue_python_init_edgraphpin(PyObject *);
#endif