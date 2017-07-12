## Getting Started

```
kubectl create -f kube-lego-configmap.yaml
kubectl create -f kube-lego.yaml
kubectl create -f namespace.yaml
kubectl create -f nginx.yaml
kubectl create -f service.yaml
kubectl create -f ingress-tls.yaml
```

## Delete Resources

```
kubectl --namespace=nginx-letsencrypt-demo delete ingress nginx-ingress
kubectl --namespace=nginx-letsencrypt-demo delete service nginx
kubectl --namespace=nginx-letsencrypt-demo delete deployment nginx
```