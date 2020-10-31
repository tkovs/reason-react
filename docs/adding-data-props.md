---
title: Adding data-* attributes
---

Reason doesn't support using props with dashes right now, ie: `data-id` or `data-whatever`. You can overcome this by creating a `Spread` component:

```reason
/* Spread.re */
[@react.component]
let make = (~props, ~children) => React.cloneElement(children, props);
```

Using Spread:

```reason
[@react.component]
let make = (~name) =>
  <Spread props={"data-cy": name}>
    /* This div will now have the `data-cy` attribute in the DOM! */
    <div />
  </Spread>;
```
